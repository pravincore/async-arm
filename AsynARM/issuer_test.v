`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:20:01 01/15/2014
// Design Name:   issuer
// Module Name:   /home/pravinkumar/Documents/Workspace/Xilinx/AsynARM/issuer_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: issuer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module issuer_test;

	// Inputs
	reg readyIn;
	reg [31:0] dataIn;
	reg triggerIn;
	reg [31:0] cpsr;

	// Outputs
	wire readyOut;
	wire [31:0] dataOut;
	wire triggerOut;

	// Instantiate the Unit Under Test (UUT)
	issuer uut (
		.readyIn(readyIn), 
		.dataIn(dataIn), 
		.triggerIn(triggerIn), 
		.readyOut(readyOut), 
		.dataOut(dataOut), 
		.triggerOut(triggerOut), 
		.cpsr(cpsr)
	);
	
//	always @

	initial begin
		// Initialize Inputs
		readyIn = 0;
		dataIn = 0;
		triggerIn = 0;
		cpsr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Test for EQ
		dataIn = 32'h00ff00ff;
		cpsr = 32'h40ff00ff;
		readyIn = 1;					// We might have to wait till setup completes
		#1 triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		#10;
		
		dataIn = 32'h00f0f0f0;
		cpsr = 32'h00ff00ff;
		readyIn = 1;					// We might have to wait till setup completes
		#1 triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut) readyIn = 0;		
		#10;
		
		// Test for NEQ
		dataIn = 32'h10ff00ff;
		cpsr = 32'h00ff00ff;
		readyIn = 1;					// We might have to wait till setup completes
		#1 triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
      #10;
		
		dataIn = 32'h10f0f0f0;
		cpsr = 32'h40ff00ff;
		readyIn = 1;					// We might have to wait till setup completes
		#1 triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		
		// Add stimulus here
		#50 $finish;
        
		// Add stimulus here

	end
      
endmodule

