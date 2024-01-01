#include<stdio.h>

int (*a[3])(int,int);

void main(){
int *p=a[0](2,3);
int *q=a[1](2,3);
int *r=a[2](2,3);
printf("%d %d %d",*p,*q,*r);
}

int (*a[3])(int m,int n){
static int z;
z=m+n;
return (&z);
}
