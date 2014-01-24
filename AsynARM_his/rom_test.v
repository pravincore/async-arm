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
	reg trigger;

	// Outputs
	wire [7:0] data;

	// Instantiate the Unit Under Test (UUT)
	rom uut (
		.addr(addr), 
		.data(data), 
		.trigger(trigger)
	);

	initial begin
		// Initialize Inputs
		addr = 0;
		trigger = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
		
		trigger = ~trigger;
		#10 addr = 4294967295;
		#10 trigger = ~trigger;
		
		#10 $finish;

	end
      
endmodule

