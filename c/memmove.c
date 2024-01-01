#include<stdio.h>

void main(){
char str[18]="vishnu AND krishan";
memmove(str,&str[7],6);
printf("%s",str);
}

