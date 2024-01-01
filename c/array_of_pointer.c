#include<stdio.h>

void main(){
int *c[2];
int a[5]={1,2,3,4,5};
int b[5]={6,7,8,9,10};
c[0]=a;
c[1]=b;
for(int i=0;i<5;i++){
printf("%d\t%d",*c[0]++,*c[1]++);
printf("\n");
}
}
