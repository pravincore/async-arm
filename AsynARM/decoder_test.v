`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:02:33 01/24/2014
// Design Name:   decode
// Module Name:   /home/pravinkumar/Workspace/Xilinx/AsynARM/decoder_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder_test;

	// Inputs
	reg [31:0] dataIn;
	reg readyIn;
	reg triggerIn;
	reg readyInRB;
	reg dataInRB;
	reg semRB;

	// Outputs
	wire [31:0] dataOut1;
	wire [31:0] dataOut2;
	wire [31:0] dataOut3;
	wire [31:0] dataOut4;
	wire [3:0] typeOut;
	wire readyOut;
	wire triggerOut;
	wire rwRB;
	wire addrRB;
	wire triggerOutRB;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.dataIn(dataIn), 
		.readyIn(readyIn), 
		.triggerIn(triggerIn), 
		.dataOut1(dataOut1), 
		.dataOut2(dataOut2), 
		.dataOut3(dataOut3), 
		.dataOut4(dataOut4), 
		.typeOut(typeOut), 
		.readyOut(readyOut), 
		.triggerOut(triggerOut), 
		.readyInRB(readyInRB), 
		.dataInRB(dataInRB), 
		.semRB(semRB), 
		.rwRB(rwRB), 
		.addrRB(addrRB), 
		.triggerOutRB(triggerOutRB)
	);

	initial begin
		// Initialize Inputs
		dataIn = 0;
		readyIn = 0;
		triggerIn = 0;
		readyInRB = 0;
		dataInRB = 0;
		semRB = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

