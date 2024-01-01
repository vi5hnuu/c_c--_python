#include<iostream>
using namespace std;

int main(){
int i=10;
int &j=i;
j++;
i++;
//cout<<i<<j;

//int *p=15;

int a=10;
int *p=&a;
int *&q=p;
//cout<<*q<<*p;
//cout<<++*q<<*p;
cout<<*q<<++*p;

return 0;
}
