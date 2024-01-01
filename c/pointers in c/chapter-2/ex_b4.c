#include<stdio.h>


void main(){
char s[]="C a of ";
//char t[]="is philosophy life";
char t[]="is ";
char u[40];
char *ss=s,*tt=t,*uu=u;
while(*ss || *tt){
while(*ss){
if((*uu++=*ss++)==' ')
break;
}
while(*tt){
if((*uu++=*tt++)==' ')
break;
}
}
*uu='\0';
puts(u);
}
