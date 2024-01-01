#include<stdio.h>

int f(){
printf("hey there");
}

void main(){
int (*p)()=f;
(*p)();
return 0;
}
