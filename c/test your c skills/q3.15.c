#include<stdio.h>

/*void main(){
int a=5;
(a==5)? return (0):return (1);
}*/

void main(){
int a=2,b=3,c=4;
int max=a>b?a>c?a:c:b>c?b:c;
printf("%d",max);
}
