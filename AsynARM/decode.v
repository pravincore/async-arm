`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:26:20 01/24/2014 
// Design Name: 
// Module Name:    decode 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module decode(

// pipeline interface
input [31:0]dataIn,
input readyIn,
input triggerIn,
output reg [31:0]dataOut1,
output reg [31:0]dataOut2,
output reg [31:0]dataOut3,
output reg [31:0]dataOut4,
output reg [3:0]typeOut,
output reg readyOut,
output reg triggerOut,

// register bank interface
input readyInRB,
input dataInRB,
input semRB,
output reg rwRB,
output reg addrRB,
output reg triggerOutRB
    );
	 
	 initial begin
	 fork
	 dataOut1 = 0;
	 dataOut2= 0;
	 dataOut3 = 0;
	 dataOut4 = 0;
	 readyOut = 0;
	 triggerOut = 0;
	 rwRB = 0;
	 addrRB = 0;
	 triggerOutRB = 0;
	 join
	 end
	 
	 initial begin
	 #10;
	 forever @(posedge triggerIn or negedge triggerIn)
	 begin
		wait (readyIn);
		fork
			
		join
		if( ~data[27] & ~data[26] & (~data[7] | ~data[4])) // condition for data processing instructions
		begin
			type = 0;
			// get operand1
			wait (~semRB);
			addrRB = data[15:12];
			#1 triggerOutRB = ~triggerOutRB;
			wait (readyInRB);
			dataOut1 = dataInRB;
			// get operand2
			if(dataIn[25])
			begin
				wait (~semRB);
				addrRB = dataIn[15:12];
				#1 triggerOutRB = ~triggerOutRB;
				wait (readyInRB);
				dataOut1 = dataInRB;
			end
			else dataOut2 = dataIn[7:0];
		end
		dataOut4 = dataIn;
//		trigger
	 end
	 end
	 
endmodule
