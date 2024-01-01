#include<stdio.h>

#define and &&
#define equal ==
#define gt >

void main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a equal b) and (a gt c) )
printf("ok");
else
printf("not ok");
}
