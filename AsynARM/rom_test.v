`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:10:59 01/12/2014
// Design Name:   rom
// Module Name:   C:/Xilinx/14.2/ISE_DS/AsynARM/rom_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rom
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rom_test;

	// Inputs
	reg [31:0] addr;
	reg triggerIn;

	// Outputs
	wire [7:0] data;
	wire readyOut;

	// Instantiate the Unit Under Test (UUT)
	rom uut (
		.addr(addr), 
		.data(data), 
		.triggerIn(triggerIn),
		.readyOut(readyOut)
	);

	initial begin
		// Initialize Inputs
		addr = 0;
		triggerIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		addr = 0;
		#1 triggerIn = ~triggerIn;
		wait (readyOut) addr = 3;
		#1 triggerIn = ~triggerIn;
		
		#10 $finish;

	end
      
endmodule

