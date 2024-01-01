#include<stdio.h>
#include<stdlib.h>
#define row 3
#define column 4

void main(){
int *p,k=0;
p=(int*)malloc(row*column*sizeof(int));
for(int i=0;i<row;i++)
for(int j=0;j<column;j++){
p[k]=k;
printf("%5d",p[k++]);
}
}
