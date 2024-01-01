#include<stdio.h>

void main(){
int s;
float f;
char c;
void *p=&s;
*(int *)p=10;
printf("%d\n",s);
p=&f;
*(float *)p=12.5;
printf("%.2f\n",f);
p=&c;
*(char*)p='V';
printf("%c",c);
}
