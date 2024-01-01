#include<stdio.h>
#define N 10
void main(){
#ifdef N
printf("N defined");
#else
printf("N not defined");
#endif
}
