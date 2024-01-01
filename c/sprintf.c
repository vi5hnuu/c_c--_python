#include<stdio.h>

void main(){
int a=10;
char c='a';
float p=3.14;
char spf[20];
sprintf(spf,"%d %c %.2f",a,c,p);
printf("%s",spf);
}
