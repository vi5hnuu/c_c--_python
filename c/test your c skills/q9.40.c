#include<stdio.h>
#include<string.h>

void main(){
static char s[]="hello!";
printf("%d\n",*(s+strlen(s)));
}
