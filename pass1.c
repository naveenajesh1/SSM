#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
FILE *input,*symtab,*intermediate,*optab;
char label[30],opcode[30],operand[30],code[30],opcode1[30];
int start,locctr,flag;
input=fopen("input.txt","r");
optab=fopen("optab.txt","r");
intermediate=fopen("intermediate.txt","w");
symtab=fopen("symtab.txt","w");
fscanf(input,"%s %s %s",label,opcode,operand);
if(strcmp(opcode,"START")==0){
start=atoi(operand);
locctr=start;
fprintf(intermediate,"%d %s %s %s \n",locctr,label,opcode,operand);
}
else{
locctr=0;
}
printf("LOCCTR:\n");
printf("%d\n",locctr);
fscanf(input,"%s %s %s",label,opcode,operand);
while(strcmp(opcode,"END")!=0){
flag=0;
if(strcmp(label,"**")!=0){
fprintf(symtab,"%s %d\n",label,locctr);
}
else {
fscanf(optab,"%s %s",opcode1,code);
}
if(strcmp(opcode,"WORD")==0){
locctr=locctr+3;
}
else if(strcmp(opcode,"RESW")==0){
locctr=locctr+(3*(atoi(operand)));
}
else if(strcmp(opcode,"RESB")==0){
locctr=locctr+(atoi(operand));
}
else if(strcmp(opcode,"BYTE")==0){
locctr=locctr+(strlen(operand)-3);
}
else{
locctr=locctr+3;
flag=1;
}
fprintf(intermediate,"%d %s %s %s\n",locctr,label,opcode,operand);
printf("%d\n",locctr);
fscanf(input,"%s %s %s",label,opcode,operand);
}
fprintf(intermediate,"%d %s %s %s\n",locctr,label,opcode,operand);
int programlength=locctr-start;
printf("Program Length=%d",programlength);
fclose(input);
fclose(symtab);
fclose(intermediate);
fclose(optab);
}



