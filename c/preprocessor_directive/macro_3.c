#include<stdio.h>

#define double(a) a*2
#define triple(a) a*3

void main(){
printf("num\tdouble\ttriple\n");
for(int i=0;i<5;i++)
printf("%d\t%d\t%d\n",i,double(i),triple(i));
}
