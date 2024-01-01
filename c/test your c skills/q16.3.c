#include<stdio.h>


void main(){
char *s;
char *fun();
s=fun();
printf("%s",s);
free(s);
}

char *fun(){
char *ptr;
ptr=(char*)malloc(30);
strcpy(ptr,"kumar vishnu");
return ptr;
}
