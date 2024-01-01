#include<stdio.h>

int main(){
extern int a;
a=15;
printf("%d",a);
}
int a=50;//error if not included
