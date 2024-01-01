#include<stdio.h>
/*
void main(){
int k=5,m=10;
const int *p=&k;//address can be changed not value
//p++;
//++*p;
//*p=10;
p=&m;
//*p++;//increase address and then its value(++ has more priority)
printf("%d %d",k,*p);
}*/

void main(){
int k=5,m=10;
int const *p=&k;//confusion
//k=10;
p=&m;
printf("%d %d",k,*p);
}

