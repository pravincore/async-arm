`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:50:06 01/31/2014
// Design Name:   regbank
// Module Name:   /home/pravinkumar/Workspace/Xilinx/AsynARM/regbank_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regbank
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regbank_test;

	// Inputs
	reg triggerInr;
	reg triggerInw;
	reg [31:0] dataIn;
	reg [3:0] addrr;
	reg [3:0] addrw;
	reg [31:0] pcIn;

	// Outputs
	wire readyOut;
	wire [31:0] dataOut;
	wire [31:0] pcOut;

	// Instantiate the Unit Under Test (UUT)
	regbank uut (
		.triggerInr(triggerInr), 
		.triggerInw(triggerInw), 
		.dataIn(dataIn), 
		.addrr(addrr), 
		.addrw(addrw), 
		.readyOut(readyOut), 
		.dataOut(dataOut), 
		.pcIn(pcIn), 
		.pcOut(pcOut)
	);

	initial begin
		// Initialize Inputs
		triggerInr = 0;
		triggerInw = 0;
		dataIn = 0;
		addrr = 0;
		addrw = 0;
		pcIn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		addrw = 3;
		dataIn = 4;
		#1 triggerInw = ~triggerInw;
		
		#10;
		addrr = 3;
		#1 triggerInr = ~triggerInr;
		
		#10;
		pcIn = 15;
		
		#50 $finish;

	end
      
endmodule

