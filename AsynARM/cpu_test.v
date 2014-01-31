`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:15:19 01/31/2014
// Design Name:   cpu
// Module Name:   C:/Users/pravinkumar/Documents/GitHub/async-arm/AsynARM/cpu_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_test;

	// Inputs
	reg [31:0] portIn;

	// Outputs
	wire [31:0] portOut;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.portIn(portIn), 
		.portOut(portOut)
	);

	initial begin
		// Initialize Inputs
		portIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #200 $finish;
		// Add stimulus here

	end
      
endmodule

