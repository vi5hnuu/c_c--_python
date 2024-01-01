#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
virtual void virtfunc(){}
};

class Derv1:public Base{};
class Derv2:public Base{};

void DisplayName(Base *pb){
cout<<"\nPointer to an object of "<<typeid(*pb).name()<<endl;
}


int main(){
Base *pbase=new Derv1;
DisplayName(pbase);
pbase=new Derv2;
DisplayName(pbase);
return 0;
}
