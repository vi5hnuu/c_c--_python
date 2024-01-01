#include<stdio.h>

int xstrlen(char *);

void main(){
char arr[]="vishnu kumar";

int len1=xstrlen(arr);
printf("length of %s is %d",arr,len1);
}

int xstrlen(char *c){
int len;
while(*c!='\0'){
++len;
c++;
}
return len;
}
