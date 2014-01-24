`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:22 01/21/2014 
// Design Name: 
// Module Name:    alu 
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
module alu( output reg [31:0] result,
input [31:0] operand1,operand2,
input [3:0] opcode,
input [3:0] instruction_type,//like data processing or multiply or branch etc
input [4:0] shift_amount,
input [1:0] shift_type,
input trigger,
output [3:0] flags,
input [3:0]dest_reg,
output reg w,v,c,z,n
);

reg [31:0]Operand2;;
integer i,j,k;

always @ (posedge trigger or negedge trigger)
begin

	//----------------------------Begin Data processing--------------------------------------
	
	
	
	//------ Beginning of Barrel shifter for second operand---------
	
	case (shift_type)
	
	2'b00 : {c,Operand2}=operand2 << shift_amount;//--------LSL------------
	
	2'b01 : {Operand2,c}=operand2 >> shift_amount;//--------LSR-----------
	
	2'b10 : begin 
			  
			  Operand2=operand2>>shift_amount;
			  for (i=0 ; i<shift_amount ; i=i+1)
			  Operand2[31-i]=operand2[31];
			  c=operand2[shift_amount-1];//------------ASR------------
			  
			  end
	
	2'b11 : begin
	        
			  for(k=31,j=31-shift_amount;j>-1;k=k-1,j=j-1)
			  Operand2[j]=operand2[k];
			  for(j=32-shift_amount,k=0;k<shift_amount;k=k+1,j=j+1)
			  Operand2[j]=operand2[k];
			  //Operand2[31:0]={operand1[shift_amount-1:0],operand1[31:31-shift_amount]};
			  c=operand2[shift_amount-1];
			  
			  end//------------------------------------ROR------------------
	
	
	endcase	
 

   //-------------------------------------------End of Barrel shift--------------------------------------
	
	
 
	
  //---------------------Start operations-------------------	
	
	 case(opcode)
	 
	 4'b0000 : begin 
				  result = operand1 & Operand2;
				  w=1;//Write back register value
				  end // AND
				  
				  
				  
	 4'b0001 : begin
				  result = operand1 ^ Operand2;
				  w=1;
				  end
				 // EOR
				 
				 
	 4'b0010 : begin 
				   result = operand1 - Operand2; 
					w=1;
				  end// SUB
				  
				  
	 4'b0011 : begin
				  result = Operand2 - operand1;
				  w=1	;			  
				  end//RSB
				  
				  
				  
    4'b0100 : begin 
				  result = operand1 + Operand2;
				  w=1;
				  end// ADD
				  
				  
	 4'b0101 : begin 
				  result = operand1 + Operand2 + c;
				  w=1;
				  end//ADC
	
	
	 4'b0110 : begin 
				  result=operand1-Operand2+c-1;
				  w=1;
				  end//SBC
				  
				  
	 4'b0111 : begin 
	           result=Operand2-operand1+c-1;
				  end
				  //RSC 
				  
				  
	 4'b1000 : begin
				  result = operand1 & Operand2;
				  w=0;//Do not write back result
              // TST
				  end
				  
	 4'b1001 : begin 
	           result = operand1 ^ Operand2;
				  w=0;
				  // TEQ
				  end
				  
	 4'b1010 : begin 
				  result=operand1-Operand2;
				  w=0;
				  end// CMP
				  
				  
	 4'b1011 : begin 
	           result=operand1+Operand2;
				  w=0;
				  end
				  
				  
	 4'b1100 : begin 
				  result=operand1 | Operand2;
				  w=1;
				  end
				  
				  
    4'b1101 : begin
				  result=Operand2;
				  w=1;//MOV
	           end
	 
	 4'b1110 : begin 
				  result= operand1 & (~(Operand2));//BIC
				  w=1;
				  end
				  
				  
	 4'b1111 : begin
				  result=~(Operand2);
				  w=1;
				  end
				  
				  
	 default : $display("l");
	 endcase
	 
	end



//---------------------------------Update cpsr flags---------------------------------------------

//----------Carry -----------------

//if ( (opcode==4'b0100) || (opcode==4'b0101) || (opcode==4'b1011))
//begin


//---------Zero-------------
if(result==32'b0)begin
z=1'b1;end
else begin
z=1'b0;end


//---------Negative--------

if(result[31])
 n=1;
else
 n=0;



//---------Overflow----------
if ( (opcode==4'b0100) || (opcode==4'b0101) || (opcode==4'b1011))
begin
if(operand1[31]==0 && Operand2[31]==0 && result[31]==1)
 v=1;
else if(operand[31]==1 && Operand2[31]==1 &&result[31]==0)
 v=1;
else
 v=0;
end


endmodule
