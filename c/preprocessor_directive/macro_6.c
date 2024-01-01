#include<stdio.h>

//#define double(m) printf("double of #m is %d",m*2)
#define double(m) printf("double of "#m" is %d",m*2)
void main(){
double(5);
}
