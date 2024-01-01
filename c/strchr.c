#include<stdio.h>
#include<string.h>

void main(){
char ch[20];
gets(ch);
char *p;
//ch[strlen(ch)]='\0';
p=strchr(ch,'v');
ch[strlen(ch)]='\0';
printf("%s",p);

}
