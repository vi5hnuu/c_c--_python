#include<stdio.h>

void main(){
int x;
x=(printf("AA") || printf("BB"));
printf("%d",x);
x=(printf("AA") && printf("BB"));
printf("%d",x);
}
