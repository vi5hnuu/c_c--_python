#include<stdio.h>

void fun(int);

void main(){
fun(1);
}

void fun(int i){
int j;
j=i;
i++;
j++;
printf("%u\t%u\n",&i,&j);
if(i<=3)
fun(i);

}
