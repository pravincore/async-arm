`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:02:42 01/20/2014 
// Design Name: 
// Module Name:    register_bank 
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

module register_bank(
input [3:0]addr,
input [31:0]data_in,output [31:0]data_out,
input trigger,
input rw
    );

reg [31:0] mem [15:0];
reg [31:0]data_out, data_out;

//---------------Initialise memory-----------------------------
initial begin
mem[1]=32'b0;
mem[2]=32'b1;
end


//---------------Push pop--------------------------------
always @(posedge trigger or negedge trigger)begin
data_out = rw ? mem[addr] : 32'bz;
mem[addr]= rw ? mem[addr] : data_in;
end 



endmodule



