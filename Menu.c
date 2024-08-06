#include<stdio.h>
#include<stdlib.h>
void FCFS1();
void SCAN();
void CSCAN();
void main()
{
int choice;
while(choice!=4){
printf("\n 1.FCFS 2.SCAN 3.C-SCAN 4.EXIT \n Enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1:{
FCFS1();
break;
}

case 2:{
SCAN();
break;
}

case 3:{
CSCAN();
break;
}

case 4:{
printf("TERMINATED!!\n");
break;
}
}
}
}

void FCFS1(){
int n,distance,head,seektime=0;
printf("Enter the no of requests:");
scanf("%d",&n);
int a[30];
printf("Enter the head pos:");
scanf("%d",&head);
printf("Enter the requests:");
for(int i=1;i<=n;i++){
scanf("%d",&a[i]);
}
a[0]=head;
for(int i=0;i<n;i++){
distance=(abs(a[i]-a[i+1]));
printf("Head moves from %d to %d & the distance is %d\n",a[i],a[i+1],distance);
seektime=seektime+distance;
}
printf("Total head movement=%d\n",seektime);
}



void SCAN(){
int n,max,distance,head,seektime=0,temp,queue[20],queue1[20],queue2[20],a=0,a1=0,a2=0,x;
printf("Enter the no of requests:");
scanf("%d",&n);
printf("Enter the head pos:");
scanf("%d",&head);
printf("Enter the maximum range:");
scanf("%d",&max);
printf("Enter the requests:");
for(int i=1;i<=n;i++){
scanf("%d",&temp);
if(temp>head){
queue1[a1]=temp;
a1++;
}
else{
queue2[a2]=temp;
a2++;
}
}
for(int i=0;i<a1;i++){
for(int j=i+1;j<a1;j++){
if(queue1[i]>queue1[j]){
x=queue1[i];
queue1[i]=queue1[j];
queue1[j]=x;
}
}
}
for(int i=0;i<a2;i++){
for(int j=i+1;j<a2;j++){
if(queue2[i]<queue2[j]){
x=queue2[i];
queue2[i]=queue2[j];
queue2[j]=x;
}
}
}
queue[a]=head;
a++;
for(int i=0;i<a1;i++){
queue[a]=queue1[i];
a++;
}
queue[a]=max;
a++;
for(int i=0;i<a2;i++){
queue[a]=queue2[i];
a++;
}
queue[a]=0;
for(int i=0;i<(a-1);i++){
distance=abs(queue[i]-queue[i+1]);
printf("Head moves from %d to %d & the distance is %d\n",queue[i],queue[i+1],distance);
seektime=seektime+distance;
}
printf("Total head movement=%d\n",seektime);
}



void CSCAN(){
int n,max,distance,head,seektime=0,temp,queue[20],queue1[20],queue2[20],a=0,a1=0,a2=0,x;
printf("Enter the no of requests:");
scanf("%d",&n);
printf("Enter the head pos:");
scanf("%d",&head);
printf("Enter the maximum range:");
scanf("%d",&max);
printf("Enter the requests:");
for(int i=1;i<=n;i++){
scanf("%d",&temp);
if(temp>head){
queue1[a1]=temp;
a1++;
}
else{
queue2[a2]=temp;
a2++;
}
}
for(int i=0;i<a1;i++){
for(int j=i+1;j<a1;j++){
if(queue1[i]>queue1[j]){
x=queue1[i];
queue1[i]=queue1[j];
queue1[j]=x;
}
}
}
for(int i=0;i<a2;i++){
for(int j=i+1;j<a2;j++){
if(queue2[i]>queue2[j]){
x=queue2[i];
queue2[i]=queue2[j];
queue2[j]=x;
}
}
}
queue[a]=head;
a++;
for(int i=0;i<a1;i++){
queue[a]=queue1[i];
a++;
}
queue[a]=max;
a++;
queue[a]=0;
a++;
for(int i=0;i<a2;i++){
queue[a]=queue2[i];
a++;
}
for(int i=0;i<(a-1);i++){
distance=abs(queue[i]-queue[i+1]);
printf("Head moves from %d to %d & the distance is %d\n",queue[i],queue[i+1],distance);
seektime=seektime+distance;
}
printf("Total head movement=%d\n",seektime);
}



