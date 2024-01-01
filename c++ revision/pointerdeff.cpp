#include<iostream>
using namespace std;

int main(){
int a=2,b=3;
int *c[2];
c[0]=&a;
c[1]=&b;
//cout<<*(*c)<<*(*(c+1));
int e=4,f=5;
int (*d)[2];
int m[6]={1,2,3,4,5,6};
d=m;
cout<<*d[0];
}
