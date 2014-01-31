`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:22 01/31/2014 
// Design Name: 
// Module Name:    cpu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
//use the following as suffix in the nomenclature of wires in cpu 
//rom r, fetch f, issue i, decode d, alu e, writeback w, memory m, ram ra,
//prog. counter p
//
//
//////////////////////////////////////////////////////////////////////////////////
module cpu(
input [31:0]portIn,
output reg [31:0]portOut
    );
	 
	 // for simulation
	 reg trigger_fi;
	 reg [31:0]pcRead_fp;
	 
	 // rom to fetch wires
	 wire [31:0]addr_fr;
	 wire [7:0]data_fr;
	 wire trigger_fr;
	 wire ready_fr;
	 // fetch to pc wires
	 wire [31:0]pcRread_fp;
	 wire [31:0]pcWrite_fp;
	 // fetch to issue wires
	 wire [31:0]data_fi;
//	 wire trigger_fi;
	 wire ready_fi;
	 
	 
	 rom rom1(
	 .addr(addr_fr),
	 .data(data_fr),
	 .triggerIn(trigger_fr),
	 .readyOut(ready_fr)
	 );
	 
	 fetch fetch1(
	 .triggerIn(trigger_fi),
	 .dataOut(data_fi),
	 .readyOut(ready_fi),
	 .dataIn(data_fr),
	 .triggerOut(trigger_fr),
	 .readyIn(ready_fr),
	 .addrOut(addr_fr),
	 .pcIn(pcRead_fp),
	 .pcOut(pcWrite_fp)
	 );
	 
	 /////////////////////////// simulation code ///////////////////////
	 
	 always @(pcWrite_fp) begin
		pcRead_fp = pcWrite_fp;
		#1 $display(pcWrite_fp);
		
	 end
	 always @(data_fi)
		portOut = data_fi;
	 initial begin
		trigger_fi = 0;
		#100; // wait for global reset
		
		pcRead_fp = 0;
		#1 trigger_fi = ~trigger_fi;
		fork
		
		forever
			wait (ready_fi) trigger_fi = ~trigger_fi;
		
		#100 $finish;
		join
	 end
	 
endmodule
