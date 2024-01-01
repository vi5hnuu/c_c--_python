#include<stdio.h>

void main(){
int *x=NULL;
*x=100;//but where is address. so, error
printf("%d",*x);
}
