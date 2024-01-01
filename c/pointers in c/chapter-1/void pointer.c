#include<stdio.h>


void main(){
int i=5;
float j=5.5;
void *k;
k=&i;
*(int *)k=20;
printf("%d",i);
k=&j;
*(float *)k=25.5;
printf("\n%f",j);
}
