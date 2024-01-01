#include<stdio.h>

void main(){
char str1[]="good";
char str2[20];
char str3[20]="Day";
int i;
i=strcmp(strcat(str3,strcpy(str2,str1)),strcat(str3,"good"));
printf("%d",i);
}
