#include<stdio.h>


void main(){
int x=50;
const int y=x;
x=60;
printf("%d",y);
//y=70; error
int *p=&y;
*p=70;
printf("\nnew %d",y);

}
