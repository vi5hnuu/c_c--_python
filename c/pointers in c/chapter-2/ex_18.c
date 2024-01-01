#include<stdio.h>

/*
void main(){
char c[]="c is a philosophy of life.";
char t[40];
char *ss,*tt;
ss=c;
tt=t;
while(*ss)
*tt++=*ss++;
*tt='\0';
printf("%s\n",t);
}*/

void main(){
char c[]="c is a philosophy of life.";
char t[40];
char *ss,*tt;
ss=c;
tt=t;
while(*tt++=*ss++);
printf("%s\n",t);
}
