`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:22 01/24/2014 
// Design Name: 
// Module Name:    regbanknpc 
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
module regbank(
input triggerInr,
input triggerInw,
input [31:0]dataIn,
input [3:0]addrr,
input [3:0]addrw,
output reg readyOut,
output reg [31:0]dataOut,
input [31:0]pcIn,
output reg [31:0]pcOut
    );
	 
	 reg [31:0]mem[15:0];
	 
	 initial begin
	 // for simulation only
//	 mem[0] = 1;
//	 mem[1] = 2;
//	 mem[2] = 3;
//	 mem[3] = 4;
	 //
		readyOut = 0;
		dataOut = 0;
		pcOut = 0;
	 end
	 
	 initial begin
		#10;
		forever @(posedge triggerInr or negedge triggerInr)
		begin
			readyOut = 0; 
			#1;
			dataOut = mem[addrr];
			readyOut = 1;
		end
	 end
	 
	 initial begin
		#10;
		forever @(posedge triggerInw or negedge triggerInw)
		begin
			mem[addrw] = dataIn;
		end
	 end
	 
	 // cpsr out for the issuer
	 
	 
	 
	 // pc
	 initial begin
		#10;
		forever @(pcIn)
		begin
			mem[15] = pcIn;
		end
	 end
	 always @(mem[15])
		pcOut = mem[15];
	 
endmodule
