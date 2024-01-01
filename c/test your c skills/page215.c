#include<stdio.h>
/*void fun(int[][4]);
void main(){
int a[3][4]={0};
fun(a);
}

void fun(int a[][4]){
for(int i=0;i<3;i++){
for(int j=0;j<4;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
}*/

/*
void fun(int[][4]);
void main(){
int a[3][4]={0};
fun(a);
}

void fun(int a[3][4]){
for(int i=0;i<3;i++){
for(int j=0;j<4;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
}*/


void fun(int*);
void main(){
int a[3][4]={0};
fun(a);
}

void fun(int *a){
for(int j=0;j<12;j++)
printf("%d\t",*(a+j));
printf("\n");
}
