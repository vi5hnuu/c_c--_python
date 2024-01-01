#include<stdio.h>


void main(){
char str[]="for your eyes only";
int i;
char *p
;
for(p=str,i=0;p+i<=str+strlen(str);p++,i++)
printf("%c",*(p+i));
}
