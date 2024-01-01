#include<stdio.h>

void main(){
int  *j;
void fun(int**);
fun(&j);

}

void fun(int **k){
static int a=10;
*k=&a;
}
