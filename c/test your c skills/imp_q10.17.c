#include<stdio.h>
#include<string.h>

void main(){
struct emp{
char *n;
int age;
};
struct emp e1={"david",23};
struct emp e2=e1;
//printf("%s",e2.n);
//printf("\n%d",e2.age);

strupr(e2.n);//error
//printf("%s",e1.n);
}
