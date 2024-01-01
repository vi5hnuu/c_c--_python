#include<iostream>
using namespace std;

int main(){
void fun(int ,float);
void (*p)(int ,float);
p=fun;
(*p)(10,3.14f);
return 0;
}

void fun(int a,float b){
cout<<a<<b<<endl;
}
