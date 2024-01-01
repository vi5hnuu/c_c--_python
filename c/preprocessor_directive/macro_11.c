#include<stdio.h>

#define n 10

void main(){
#if defined N
printf("defined");
#else
#error "defined"
#endif
}
