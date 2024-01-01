#include<stdio.h>


void main(){
int n[3][3]={2,4,3,6,8,5,3,5,1};
int *ptr;
ptr=n;
printf("%u %u\n%u %u",ptr,n,ptr+1,n+1);//n+1 next row but ptr+1 is next addres as it is pointer it int.
}
