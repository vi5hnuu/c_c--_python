#include<stdio.h>


void main(){
int *i,*j;
//j=i*2;//first there is garbage address in i and j and second we cant multiply address we can just take diff
int d=j-i;
//printf("j=%u",j);
printf("%d",d);
}
