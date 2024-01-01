#include<stdio.h>

void xstrcat(char *,const char *);

void main(){
char t[60]="vishnu kumar";
char s[]=" is a good boy";

xstrcat(t,s);
printf("source %s\ntarget %s",s,t);
}

void xstrcat(char *x,const char *y){
while((*x)!='\0')
    x++;//to go to end of x

//strcat
while(*y!='\0'){
*x++=*y++;
}
*x='\0';
}
