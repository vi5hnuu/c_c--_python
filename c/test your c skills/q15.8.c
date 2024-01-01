#include<stdio.h>

int fun(int *f){
*f=10;
return 0;
}

void main(){
const int aa[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
printf("%3d",aa[i]);
fun(&aa[3]);//works as pointer can change const value..but
//aa[4]=15;//not work
printf("\n");
for(int i=0;i<5;i++)
printf("%3d",aa[i]);
}
