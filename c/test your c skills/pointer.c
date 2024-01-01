#include<stdio.h>

void main(){
int a[2][2][2]={10,2,3,4,5,6,7,8};
int *p,*q,*r,*s,*t;
p=&a[1][1][1];
q=(int*)a;
r=a;
s=a[0][0];
t=a[0];
printf("%d\t%d\t%d\t%d\t%d",*p,*q,*r,*s,*t);
}
