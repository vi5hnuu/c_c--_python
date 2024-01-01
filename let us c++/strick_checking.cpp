#include<iostream>
using namespace std;

void fun(double a){cout<<a;};
void func(float a){cout<<a;};
//wtf its working,,,,page 55 let us c++
int main(){
float a=5.5f;
double b=5.5;
fun(a);
func(b);
return 0;
}
