#include<iostream>
using namespace std;

class A{
private:
int data;
public:
A(){data=50;cout<<"ctor";}
~A(){cout<<"dtor";}

A(A &a){
data=a.data;
cout<<"cpy calld.";
}
friend ostream& operator << (ostream &s,A a);//use cpy ctor and ctor
//friend ostream& operator << (ostream &s,A &a);
};

ostream& operator << (ostream &s,A a){
//ostream& operator << (ostream &s,A &a){
s<<a.data;
}

int main(){
A a;
cout<<a;
}
//now chk programm stackk_template.cpp
