#include<iostream>
using namespace std;

int main(){
char str[10];
int a=123456;
itoa(a,str,10);
cout<<str<<endl;
cout<<str[5];
return 0;
}
