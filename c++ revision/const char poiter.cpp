#include<iostream>
using namespace std;

int main(){
//char const *s="vishnu";
//char  *const s="vishnu";
//const char  *s="vishnu";
//s="kumar";
//*s='k';
int a=10,b=11;
//int *p=&a;
//const int *p=&a;
//int const *p=&a;
int  *const p=&a;
//p=&b;
*p=12;
cout<<*p;
}
