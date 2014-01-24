`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:37:23 01/21/2014 
// Design Name: 
// Module Name:    decoder 
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
module decoder( input [31:0]code, input trigger,
output [31:0] operand1, operand2, operand3,control,
output [3:0]opcode,Rd_a,Rdhi_a);


reg Rm,Rn,Rs;
reg cpsr[31:0]

//input [3:0]addr,
//input [31:0]data_in,output [31:0]data_out,
//input trigger,
//input rw
//----------Data Processing instructions--------
always @ (posedge trigger or negedge trigger)
begin
	if(!code[27] && !code[26]) 
	begin
	register_bank(code[19:16],,operand1,!trigger,1); //1st operand
	opcode = code[24:21]; //opcode
	Rd_a = code[15:12]; //adress of destination register
   
	
			
			if(!code[25])// 2nd operand is Rm
			begin
			register_bank(code[3:0],,Rm ,!trigger,1);
					
					if(!code[4])
					case(code[6:5])
					2'b00: begin { cpsr[30], operand2} = Rm << code[11:7]; end//LSL cpsr[30] is carry
					2'b01: begin { operand2, cpsr[30]} = Rm >> code[11:7];end//RSL
					2'b10: begin 
			
			
			end
			
			
			
			if(code[25]) //2nd operand is immediate value
			begin
			im=code[7:0]; //immediate value
			control[20:17]=code[11:8];//Shift
			end
			
			//if(code[20])
			//Set condition codes
			
			
			
			
			
			
			
			
			
	end
end


endmodule
