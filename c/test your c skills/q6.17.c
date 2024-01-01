#include<stdio.h>

#define fun(arg) do{ if(arg){ printf("have fun","\n");}}while(i--);

void main(){
int i=2;
fun(i<3);
}
