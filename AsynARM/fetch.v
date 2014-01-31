`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:49 01/15/2014 
// Design Name: 
// Module Name:    fetch 
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
module fetch(
input triggerIn,				// to decode
output reg [31:0]dataOut,	// to decode
output reg readyOut,			// to decode
input [7:0]dataIn,			// to rom
output reg triggerOut,		// to rom
input readyIn,					// to rom
output reg [31:0]addrOut,	// to rom
input [31:0]pcIn,				// to pc
output reg [31:0]pcOut		// to pc
    );
	 
	 reg [31:0]data;
	 reg [31:0]pc;
	 integer i;
	 
	 initial fork
	 triggerOut = 0;
	 dataOut = 0;
	 readyOut = 0;
	 pc = 0;
	 pcOut = 0;
	 addrOut = 0;
	 join
	 
	 initial begin
	 #10;
	 forever @(posedge triggerIn or negedge triggerIn)
	 begin
		
		pc = pcIn;
		pcOut = pc+4;
		
		addrOut = pc;
		#1 triggerOut = ~triggerOut;
		wait (readyIn);
		fork
		data[7:0] = dataIn;
//		$display(data[7:0]);
		pc = pc+1;
		join
		
		addrOut = pc;
		#1 triggerOut = ~triggerOut;
		wait (readyIn);
		fork
		data[15:8] = dataIn;
//		$display(data[15:8]);
		pc = pc+1;
		join
		
		addrOut = pc;
		#1 triggerOut = ~triggerOut;
		wait (readyIn);
		fork
		data[23:16] = dataIn;
//		$display(data[23:16]);
		pc = pc+1;
		join
		
		addrOut = pc;
		#1 triggerOut = ~triggerOut;
		wait (readyIn);
		fork
		data[31:24] = dataIn;
//		$display(data[31:24]);
		join
		
		dataOut = data;
//		$display("%h",data);
		readyOut = 1;
	 
	 end
	 end
	 


endmodule
