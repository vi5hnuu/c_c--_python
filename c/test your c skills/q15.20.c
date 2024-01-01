#include<stdio.h>


void main(){
const int k=7; //value const so k=8 error,but pointer can change it
int *const q=&k;//value change kr skt ha, but  not address
*q=20;//correct
printf("%d",*q);
}
