#include<stdio.h>
#include<string.h>

void main(){
char str[]="sales\0man\0";//sales as \0==0
char strr[]="sales0man0";//0 is not treated as zero
char strrr[]="sa\nles\0m\nan\0";//\0==0
printf("%s",strrr);
}
