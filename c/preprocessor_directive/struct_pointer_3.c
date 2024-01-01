#include<stdio.h>

struct book{
int a;
int b;
int c;
};

void main(){
struct book b;
b.a=2;
b.b=3;
b.c=5;
int *p=&b.a;
printf("%d",*p);
printf("%d",*++p);
printf("%d",*++p);
}
