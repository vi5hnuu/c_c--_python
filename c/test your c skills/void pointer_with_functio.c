#include<stdio.h>

int i=5;
void fun(void *p);

void main(){
void *vptr;
vptr=&i;
fun(vptr);
}

void fun(void *p){
int **q;
q=(int**)(&p);
printf("%d",**q);
}
