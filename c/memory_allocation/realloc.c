#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
char *str;
str=(char*)malloc(6);
str="india";
printf("%s\n",str);
str=(char *)realloc(str,30);
strcpy(str,"Great researchers of india.");
printf("%s\n",str);
free(str);
}
