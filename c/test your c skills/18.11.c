#include<stdio.h>

void main(){
void (*f)(int,void (*)());
void fun(int,void (*)());
void fun1();
void (*p)();
f=fun;
p=fun1;
(*f)(23,p);
}

void fun(int a,void (*s)()){
printf("hello\n");
}

void fun1(){
;
}
