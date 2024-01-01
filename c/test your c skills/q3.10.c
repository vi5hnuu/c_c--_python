#include<stdio.h>

void main(){
/*int a=10,b,c;
a>=10?b=5:(c=5);
printf("%d",b);*/

int a=10,b,c;
*((a>=10)?&b:&c)=5;
printf("%d",b);
}
