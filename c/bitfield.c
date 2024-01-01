#include<stdio.h>

#define petrol 1
#define diesel 2
#define two_wh 3
#define four_wh 4
#define old 5
#define new 6

void main(){
struct vehicle{
unsigned type:3;
unsigned fuel:2;
unsigned model:3;
};
struct vehicle v;
v.type=four_wh;
v.fuel=diesel;
v.model=new;
printf("%d\n",v.type);
printf("%d\n",v.fuel);
printf("%d\n",v.model);
}
