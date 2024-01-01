#include<stdio.h>

void main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
while(n!=0){
int z=n%10;
printf("%d",z);
n=n/10;
}
}
