#include<stdio.h>

char *fun(unsigned int num,int base);

void main(){
char *s;
s=fun(128,2);
printf("%s\n",s);
s=fun(128,16);
printf("%s\n",s);
}

char *fun(unsigned int num,int base){
static int buff[33];
static char *ptr;
ptr=&buff[sizeof(buff)-1];
*ptr='\0';
do{
*--ptr="0123456789abcdef"[num%base];
num/=base;
}while(num!=0);
return ptr;
}
