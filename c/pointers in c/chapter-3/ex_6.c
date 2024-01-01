#include<stdio.h>


void main(){
struct s1{
char *z;
int i;
struct s1 *p;
};
struct s1 a[]={
{"Nagpur",1,a+1},{"raipur",2,a+2},{"kanpur",3,a}
};
struct s1 *ptr=a;
printf("%s %s %s %s",a[0].z,ptr->z,a[2].p->z,a->z);
}
