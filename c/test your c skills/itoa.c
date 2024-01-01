#include<stdio.h>

void main(){
char str[10];
itoa(15,str,2);
printf("%s\n",str);
itoa(15,str,10);
printf("%s\n",str);
itoa(15,str,16);
printf("%s\n",str);
}
