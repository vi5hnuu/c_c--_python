#include<stdio.h>

void main(){
char ch[11];
printf("Input text :");
for(int i=0;i<11;i++)
ch[i]=getc(stdin);
for(int i=0;i<11;i++)
putc(ch[i],stdout);

}
