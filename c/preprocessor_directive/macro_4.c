#include<stdio.h>

#define double(a) a*2
void main(){
printf("num\tdouble\n");
for(int i=0;i<5;i++)
printf("%d\t%d\n",i,double(i));
#undef double(a)
//for(int i=0;i<5;i++)
//printf("%d\t%d\t%d\n",i,double(i),triple(i));

}
