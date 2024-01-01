#include<stdio.h>

void main(){
/*int a=1,b=0;
if(a>10)
b=20;
printf("%d",b);*/

int a=1,b;
/*b=a>10?20:0;*/
a>10?b=20:(b=0);
printf("%d",b);
}
