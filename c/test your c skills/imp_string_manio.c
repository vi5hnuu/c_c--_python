#include<stdio.h>
/*
void main(){
char str1[]="bombay";
char str2[]="pune";
char *s1=str1;
char *s2=str2;
while(*s1++=*s2++);
printf("%s",str1);
}*/

void main(){
char str1[]="bombay";
char str2[]="pune";
char *s1=str1;
char *s2=str2;
printf("%c %c",*s1++,*s2++);
printf("\n%c %c",*s1++,*s2++);
printf("\n%c %c",*s1++,*s2++);
printf("\n%c %c",*s1++,*s2++);
printf("\n%c %c",*s1++,*s2++);
printf("\n%c %c",*s1++,*s2++);
}
