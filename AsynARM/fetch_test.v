`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:49:48 01/17/2014
// Design Name:   fetch
// Module Name:   /home/pravinkumar/Documents/Workspace/Xilinx/AsynARM/fetch_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fetch_test;

	// Inputs
	reg triggerIn;
	reg [7:0] dataIn;
	reg readyIn;
	reg [31:0] pcIn;

	// Outputs
	wire triggerOut;
	wire [31:0] dataOut;
	wire readyOut;
	wire [31:0] pcOut;
	wire [31:0] addrOut;
	
	reg [7:0]mem[3:0];

	// Instantiate the Unit Under Test (UUT)
	fetch uut (
		.triggerIn(triggerIn), 
		.dataIn(dataIn), 
		.triggerOut(triggerOut), 
		.dataOut(dataOut), 
		.readyOut(readyOut), 
		.readyIn(readyIn), 
		.pcIn(pcIn), 
		.pcOut(pcOut), 
		.addrOut(addrOut)
	);

	initial begin
		// Initialize Inputs
		fork
		triggerIn = 0;
		dataIn = 0;
		readyIn = 0;
		pcIn = 0;
		join
		
		mem[0] = 1;
		mem[1] = 2;
		mem[2] = 3;
		mem[3] = 4;

		// Wait 100 ns for global reset to finish
		#100;
		
        pcIn = 0;
		  triggerIn = ~triggerIn;
		  
  		  #1 dataIn = mem[addrOut];
		  readyIn = 1;
		  @(posedge triggerOut or negedge triggerOut);
		  readyIn = 0;
		  
  		  #1 dataIn = mem[addrOut];
		  readyIn = 1;
		  @(posedge triggerOut or negedge triggerOut);
		  readyIn = 0;
		  
  		  #1 dataIn = mem[addrOut];
		  readyIn = 1;
		  @(posedge triggerOut or negedge triggerOut);
		  readyIn = 0;
		  
  		  #1 dataIn = mem[addrOut];
		  readyIn = 1;
		  @(posedge triggerOut or negedge triggerOut);
		  readyIn = 0;
		  
		  
		// Add stimulus here
		#50 $finish;
	end
      
endmodule

