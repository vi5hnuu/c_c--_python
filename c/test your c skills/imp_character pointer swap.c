#include<stdio.h>

void swap(char *,char*);

void main(){
char *ptr[2]={"hello","good morning"};
swap(ptr[0],ptr[1]);
printf("\n%s\n%s",ptr[0],ptr[1]);
}

void swap(char *t1,char *t2){
char *t;
t=t1;
t1=t2;
t2=t;
}
