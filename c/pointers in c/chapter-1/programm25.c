#include<stdio.h>

void display(int*,int,int);
void show(int (*q)[4],int,int);
void print(int a[][4],int,int);

void main(){
int a[3][4]={1,2,3,4,
5,6,7,8,
9,0,1,6
};
//display(a,3,4);
show(a,3,4);
}

void display(int *b,int x,int y){
for(int i=0;i<3;i++){
for(int j=0;j<4;j++)
printf("%3d",*(b+i*y+j));
printf("\n");
}
}


void show(int (*q)[4],int x,int y){
int *p;

for(int i=0;i<x;i++){
p=q+i;
for(int j=0;j<y;j++)
printf("%3d",*(p+j));
printf("\n");
}
}

void print(int a[][4],int x,int y){
for(int i=0;i<x;i++){
for(int j=0;j<y;j++)
printf("%d",a[i][j]);
printf("\n");
}
}
