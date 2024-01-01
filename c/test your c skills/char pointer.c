#include<stdio.h>

void main(){
char *p="hello";
printf("%s\n",p);
//printf("%s\n",*p);
printf("%c\n",*p);
printf("%s\n",p+1);
printf("%c \n",p[0]);
printf("%s\n",*&*&p);
printf("%c\n",*&*&p[0]);
}
