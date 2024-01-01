#include<stdio.h>

void fun(int);

void main(){
int a;
a=3;
fun(a);
printf("\n");
}

void fun(int n){
if(n>0){
fun(--n);
printf("%d",n);
fun(--n);
}
}
