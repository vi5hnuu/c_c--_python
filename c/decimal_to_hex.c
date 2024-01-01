#include<stdio.h>
#include<windows.h>
#include<process.h>
int main(){
int x,y=30,z;
printf("\nEnter a number :");
scanf("%d",&x);
printf("\nconversion of decimal to hexadecimal number : ");
for(;;){
if(x==0)
exit(0);
z=x%16;
x=x/16;
switch(z){
case 10: printf("A"); break;
case 11: printf("B"); break;
case 12: printf("C"); break;
case 13: printf("D"); break;
case 14: printf("E"); break;
case 15: printf("F"); break;
default: printf("%d",z); break;
}
}
}
