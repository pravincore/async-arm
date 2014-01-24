`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:16:54 01/21/2014
// Design Name:   reg_bank
// Module Name:   E:/PESIT/Final year project/AsynARM/reg_bank_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: reg_bank
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module reg_bank_test;

	// Inputs
	reg trigger;
	reg [3:0] address;
	
	reg we;
	reg oe;
	reg [31:0] data_out;
   
	// Bidirs
	wire [31:0] data;
	
   wire[31:0] mem [15:0];
	
	// Instantiate the Unit Under Test (UUT)
	reg_bank uut (
		.trigger(trigger), 
		.address(address), 
		.data(data),  
		.we(we), 
		.oe(oe)
	);

	initial begin
		// Initialize Inputs
		trigger = 0;
		address = 0;
		
		we = 0;
		oe = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here
		
	
		
		#50 address=1;
		trigger=~trigger;
		we=0;
	   oe=1;
		
		#50 address=15;
		trigger=~trigger;
		we=0;
		oe=1;
		
		#50 address=10;
		#10 trigger=~trigger;
		we=1;
		data_out=5;
		
		
		
		#50 address=10;
		#10 trigger=~trigger;
		we=0;oe=0;
		#10 oe=1;
		

		// Wait 100 ns for global reset to finish
		#50 $finish;
		
		$display("%b,%b,%b",mem[1],mem[15],mem[10]);

	end
      
endmodule

