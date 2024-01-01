#include<iostream>
using namespace std;
/*
struct emp{
char name;
int age;
};

int main(){
int i=10;
int *ptr;

emp e,*eptr;
e.name='v';
e.age=15;
eptr=&e;
ptr=&i;
cout<<*ptr<<endl<<eptr->name<<eptr->age;
return 0;
}*/

struct sample{
int a;
float b;
};

int main(){
int sample::*p1=&sample::a;
float sample::*p2=&sample::b;

sample so={10,3.14f};
cout<<so.*p1<<endl<<so.*p2<<endl;

sample *sp;
sp=&so;
cout<<sp->*p1<<endl<<sp->*p2<<endl;

so.*p1=20;
sp->*p2=6.28f;
cout<<so.*p1<<endl<<so.*p2<<endl;
cout<<sp->*p1<<endl<<sp->*p2<<endl;

}
