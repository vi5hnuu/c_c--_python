#include<stdio.h>

#define MAX 10

void main(){
int *p,i;
p=(int*)malloc(sizeof(int)*MAX);
for(int i=0;i<10;i++){
p[i]=i;
printf("%d",p[i]);
}
}
