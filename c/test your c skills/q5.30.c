#include<stdio.h>


void main(){
int fun(int);

int i=3;
fun(i=fun(fun(i)));
printf("final %d",i);
}

int fun(int i){
i++; //does not effect int i; in main; so at last second call i=5 and is stored in main int i;
printf("%d\n",i);
return i;
}
