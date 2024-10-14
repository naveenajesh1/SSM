#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
FILE*fp;
int i,j,length;
char line[50],arr[10];
fp=fopen("objectcode.txt","r");
fscanf(fp,"%s",line);
printf("The program name is :");
for(int i=2;i<4;i++){
printf("%c",line[i]);
}
printf("\n");
do
{
fscanf(fp,"%s",line);
if(line[0]=='T'){
for(i=0;i<6;i++){
arr[i]=line[i+2];
}
arr[i]='\0';
length=atoi(arr);
i=12;
while(line[i]!= '\0'){
if(line[i]!= '^'){
printf("%d:\t %c%c\n",length,line[i],line[i+1]);
length++;
i=i+2;
}
else{
i++;
}
}
}else if(line[0]=='E'){
break;
}
}
while(!feof(fp));
fclose(fp);
}



OUTPUT
The program name is :**
2000:	 23
2001:	 20
2002:	 18
2003:	 14
2004:	 20
2005:	 12
2006:	 01
2007:	 20
2008:	 21
2009:	 32
2010:	 00
2011:	 00
2012:	 05
2013:	 45
2014:	 4F
2015:	 46
