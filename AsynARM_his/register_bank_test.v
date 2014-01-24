`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:28:21 01/20/2014
// Design Name:   register_bank
// Module Name:   E:/PESIT/Final year project/AsynARM/register_bank_test.v
// Project Name:  arm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register_bank
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////



// Here i have initialised mem[1]=0;mem[2]=1. I have read registers R1 and R2 .
// Next i write R8=mem[8]=8 and read R8.
// Values in Memory blocks are all zzzz in simulation. Dont know why???


module register_bank_test;

	// Inputs
	reg [3:0] addr;
	reg trigger;
	reg rw;
   reg [31:0] data_in;

	wire [31:0] data_out;
	wire [31:0] mem [15:0];

	// Instantiate the Unit Under Test (UUT)
	register_bank uut (
		.addr(addr), 
		.data_in(data_in), 
		.data_out(data_out),
		.trigger(trigger), 
		.rw(rw)
	);

	initial begin
		// Initialize Inputs
		addr = 0;
		trigger = 0;
		rw = 0;
		data_in = 0;
		
		
		//---------Test for single register read  ---------
		#10 addr=1;
		#5 trigger=~trigger;
		rw=1;
		
		#50 addr=2;
		#10 trigger=~trigger;
		rw=1;
		
		// --------Test for single register write-----
		#50 addr=8;
		#10 trigger=~trigger;
		rw=0;
		data_in=8;
		
		
		#50 addr=8;
		#10 trigger=~trigger;
		rw=1;
		
	

		// Wait 100 ns for global reset to finish
		#50 $finish;
		
		$display("%b,%b,%b",mem[1],mem[2],mem[8]);
        
		// Add stimulus here

	end
      
endmodule

