#include<stdio.h>
#include<process.h>

int x,s;
//void main(int x);
void main(int x){
s=s+x;
printf("\nx=%d s=%d",x,s);
if(x==5)
exit(0);
main(++x);
}
