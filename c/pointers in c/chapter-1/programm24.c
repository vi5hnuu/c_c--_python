#include<stdio.h>


void main(){
int a[][4]={
5,6,7,8,9,
4,6,3,1,
2,9,0,6
};
int *p;
int (*q)[4];
p=(int*)a;
q=a;
printf("%u\t%u\n",p,q);
p++;
q++;
printf("%u\t%u\n",p,q);
}
