`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:03:47 01/12/2014 
// Design Name: 
// Module Name:    rom 
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
module rom(
input [31:0]addr,			//
output reg [7:0]data,	//		To
input triggerIn,			//		Fetch
output reg readyOut		//
    );

reg [7:0]mem[1048576:0]; // I have currently allocated 1MB of romspace for simulation
//integer i;
/*/ 
4294967295: thats 4GB in bytes and too big to simulate
*/

initial
begin
$readmemh("test.bin",mem);
readyOut = 0;
data = 0;
//for(i =0; i<12; i =i+1) begin
//$display("%h",mem[i]);
//end
end

initial begin
#10; // ignoring global reset edges
forever @(posedge triggerIn or negedge triggerIn)
begin
readyOut = 0;
data = mem[addr];
#1; // hold (it ;):D))
readyOut = 1;
end
end

endmodule

