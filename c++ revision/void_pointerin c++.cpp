#include<iostream>
using namespace std;

int main(){
int a=5;
void *p=&a;
*(int *)p=10;
cout<<a;
cout<<*(int*)p;
//cout<<*p;

int b=15;
p=(int *)(&b);
cout<<*(int *)p;
return 0;
}
