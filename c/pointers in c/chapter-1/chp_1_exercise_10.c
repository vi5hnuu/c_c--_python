#include<stdio.h>


void main(){
int i=10;
printf("value of i=%d address of i=%u\n",i,&i);
&i=7200;
printf("\nnew value of i=%d new address of i=%u\n",i,&i);
}
