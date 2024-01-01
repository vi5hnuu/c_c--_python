#include<stdio.h>

int xstrcmp(char *,const char *);

void main(){
char s[60]="vishnu kumar";
char t[]="vishnu k";

printf("%d",strcmp(t,s));
}

int xstrcmp(char *t,const char *s){
while(*t==*s){
if(*t=='\0')
return 0;
s++;
t++;
}
return(*t-*s);
}
