#include<stdio.h>

void main(){
int a[]={0,1,2,3,4};
int *p[]={a,a+2,a+1,a+4,a+3};
int **ptr;
ptr=p;
**++ptr;
printf("%d %d %d\n",**ptr,ptr-p,*ptr-a);
}
