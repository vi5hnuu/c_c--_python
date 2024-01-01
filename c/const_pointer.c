#include<stdio.h>

int main(){
const int a=5;
//a++;
int *p=&a;
*p=55;//we can change the value thoriugh the pointer.
printf("%d",a);
return 0;
}
