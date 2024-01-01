#include<stdio.h>

void main(){
struct a{
struct b{
char name[10];
int age;
}bb;
struct c{
char address[30];
int sal;
}cc;
};
struct a *ptr;
struct a aa={
{"vishnu",20},{"kajra,333030,rajasthan",999999}
};
ptr=&aa;
printf("%s %s %d %d\n",ptr->bb.name,ptr->cc.address,ptr->bb.age,ptr->cc.sal);
printf("%s %s %d %d\n",aa.bb.name,aa.cc.address,aa.bb.age,aa.cc.sal);
}
