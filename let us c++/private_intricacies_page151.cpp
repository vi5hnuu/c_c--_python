#include<iostream>
using namespace std;

class A{
private:
int data;
public:
    A():data(12){}
void display(){cout<<data;}
void displayy(){cout<<data;}
};

class B:private A{
private:
int d;
public:
A::display; //make display as public as it is pvt inheritance
//if we not write this then it also pvt in this class.
};

int main(){
B a;
a.display();
//a.displayy() pvt member function;
return 0;
}
