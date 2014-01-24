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
//		// Test for EQ
//		dataIn = 32'h00ff00ff;
//		cpsr = 32'h40ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//		#10;
//		
//		dataIn = 32'h00f0f0f0;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;		
//		#10;
//		
//		// Test for NEQ
//		dataIn = 32'h10ff00ff;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h10f0f0f0;
//		cpsr = 32'h40ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		
		
		
		
		
		
		// Unsigned HIGHER or same
//		
//
//		dataIn = 32'h20ff00ff;
//		cpsr = 32'h20ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h20f0f0f0;
//		cpsr = 32'h40ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//		
		
		
		
		
		
		// Test for unsigned lower
//		dataIn = 32'h30ff00ff;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h30f0f0f0;
//		cpsr = 32'h20ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		

		
		// Test for Negative  
//		dataIn = 32'h40ff00ff;
//		cpsr = 32'h80ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h40f0f0f0;
//		cpsr = 32'h70ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		
		
		
		
		// Test for Positive or Zero
//		dataIn = 32'h50ff00ff;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h50f0f0f0;
//		cpsr = 32'h90ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//		
		
		
		// Test for Overflow
//		dataIn = 32'h60ff00ff;
//		cpsr = 32'hf0ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h60f0f0f0;
//		cpsr = 32'he0ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//		
//		
//		
		// Test for No overflow V=1 code=0111 still data passing some error
//		dataIn = 32'h70ff00ff;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h70f0f0f0;
//		cpsr = 32'h10ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//		
//		


// Test for Unsigned higher execution stops some problem
		dataIn = 32'h80ff00ff;
		cpsr = 32'h00ff00ff;
		readyIn = 1;					// We might have to wait till setup completes
		#1 triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
      #10;
		
		dataIn = 32'h80f0f0f0;
		cpsr = 32'h00ff00ff;
		readyIn = 1;					// We might have to wait till setup completes
		#1 triggerIn = ~triggerIn;
		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		
//		
		
		
		// Test for Unsigned lower or same
//		dataIn = 32'h90ff00ff;
//		cpsr = 32'h10ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'h90f0f0f0;
//		cpsr = 32'hf0ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//		



//Test for Greater or equal  
//		dataIn = 32'ha0ff00ff;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'ha0f0f0f0;
//		cpsr = 32'h10ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//



// Test for less than
//		dataIn = 32'hb0ff00ff;
//		cpsr = 32'h10ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'hb0f0f0f0;
//		cpsr = 32'hf0ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;




// Test for greater than
//		dataIn = 32'hc0ff00ff;
//		cpsr = 32'hb0ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'hc0f0f0f0;
//		cpsr = 32'hf0ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		
        
		  
		// Test for less than or equal
//		dataIn = 32'hd0ff00ff;
//		cpsr = 32'h10ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'hd0f0f0f0;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		// Add stimulus here
		
		
		// Test for always
//		dataIn = 32'he0ff00ff;
//		cpsr = 32'h10ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
//      #10;
//		
//		dataIn = 32'he0f0f0f0;
//		cpsr = 32'h00ff00ff;
//		readyIn = 1;					// We might have to wait till setup completes
//		#1 triggerIn = ~triggerIn;
//		@(posedge triggerOut or negedge triggerOut) readyIn = 0;
		
		
		#50 $finish;

	end
      
endmodule

