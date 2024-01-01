#include<stdio.h>

void main(){
int a[2]={1,2};
printf("%d",a[-1]);//a[i]==*(a+i)===a[-1]==*(a-1);
//see imp_q5.29.c
}
