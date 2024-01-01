#include<stdio.h>

void fun(char *msg,...);
void main(){
fun("noting special\n",1,4,7,11,0);
}

void fun(char *msg,...){
int tot=0;
int num;
va_list ptr;
va_start(ptr,msg);
num=va_arg(ptr,int);
num=va_arg(ptr,int);
va_end(ap);
printf("%d",num);
}
