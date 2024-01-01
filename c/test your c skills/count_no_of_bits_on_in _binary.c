#include<stdio.h>


void main(){
unsigned int num;
int c=0;
printf("Enter a number :");
scanf("%u",&num);
for(;num;num>>=1){
if(num&1)
c++;
}
printf("%d",c);
}
