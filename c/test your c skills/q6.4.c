#include<stdio.h>
/*
#define sqr(x) (x*x)
void main(){
float s=10,u=30,t=2,a;
a=2*(s-u*t)/sqr(t);
printf("%f",a);
}*/


#define sqr(x) x*x
void main(){
float s=10,u=30,t=2,a;
a=2*(s-u*t)/sqr(t);
printf("%f",a);
}
