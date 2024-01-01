#include<stdio.h>

#define man(x,y) ((x)>(y))?(x):(y)
void main(){
int i=10,j,k;
j=5;
k=0;
k=man(++i,j++);
printf("%d %d %d",i,j,k);
}
