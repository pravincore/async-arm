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
input [31:0]addr,
output reg [7:0]data,
input trigger
    );

reg [7:0]mem[4294967295:0];

always @(posedge trigger or negedge trigger)
begin

data = mem[addr];
end

endmodule
