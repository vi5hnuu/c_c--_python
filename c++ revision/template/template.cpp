#include<iostream>
using namespace std;

template<class t>
t a(t b){
return b<0 ? -b :b;
}

int main(){
int num=-15;
num=a(num);
cout<<num;
}
