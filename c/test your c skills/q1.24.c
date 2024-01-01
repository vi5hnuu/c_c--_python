#include<stdio.h>

int main(){
struct emp{
char name[20];
int age;
float sal;
};
//struct emp e={"tiger",20,1502.5};
struct emp e={"tiger"};
printf("%s %d %f",e.name,e.age,e.sal);
return 0;
}
