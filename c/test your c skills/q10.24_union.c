#include<stdio.h>

void main(){
union var{
int a,b;
};

union var v;
v.a=10;
v.b=20;
//printf("%d\n",v.a);
//printf("%d\n",v.b);
printf("%d %d\n",v.b,v.a);
}
