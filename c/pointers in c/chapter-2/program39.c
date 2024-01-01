#include<stdio.h>

int xstrcpy(char *,const char *);

void main(){
char s[]="vishnu kumar";
char t[20];

xstrcpy(t,s);
printf("source %s\ntarget %s",s,t);
}

int xstrcpy(char *x,const char *y){
/*char *p=x;
x=y;    //no effect as only address are exchange in x and y
y=p;*/
while(*y!='\0'){
*x++=*y++;
}
*x='\0';
}
