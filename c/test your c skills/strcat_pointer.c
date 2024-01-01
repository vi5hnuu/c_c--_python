#include<stdio.h>
#include<string.h>

void main(){
//char *str1="united";
char str1[15]="united";
//char str1[]="united";
char *str2="front";
char *str3=strcat(str1,str2);
printf("%s\n",str3);
}
