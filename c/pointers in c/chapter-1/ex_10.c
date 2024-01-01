#include<stdio.h>


void main(){
int a[3][4]={1,2,3,4,4,3,2,8,7,8,9,0};
//int *ptr=&a[0][0];
int ptr=&a[0][0];
fun(&ptr);
}

fun(int **p){
printf("%d",**p);
}
