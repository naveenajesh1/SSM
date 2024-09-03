#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
FILE *input,*optab;
char label[30],opcode[30],operand[30],code[30],opcode1[30];
int n,n1;
input=fopen("input.txt","w");
if(input==NULL)
printf("Error in input");
else
printf("Input File Created\n");
optab=fopen("optab.txt","w");
if(optab==NULL)
printf("Error in optab");
else 
printf("Optab Created\n");
}
