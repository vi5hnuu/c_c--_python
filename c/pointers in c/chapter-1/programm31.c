#include<stdio.h>


void main(){
static int a[]={6,1,2,3};
static int *p[]={a,a+1,a+2,a+3,a+4};
printf("%u %u %u %d\n",p,*p,&a[0],*(*p));//*p==*(p+0)=p[0]
// p[0]==address of first element ,*p[0]==*a==6==*(*p)
//p[0]==address of first element, p is the address at which a is stored in memory in array at loc 0.
}
