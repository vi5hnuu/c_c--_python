#include<stdio.h>


void main(){
char str1[10],str2[10];
int length;
printf("First string");
gets(str1);
printf("second string");
gets(str2);
int z=strspn(str1,str2);
printf("%d",z);
}
