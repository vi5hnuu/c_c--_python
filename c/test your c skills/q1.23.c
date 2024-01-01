#include<stdio.h>

void fun(struct emp);

struct emp{
char name[20];
int age;
};

int main(){
struct emp e={"vishnu",20};
fun(e);
return 0;
}

void fun(struct emp m){
printf("%s %d",m.name,m.age);
}
