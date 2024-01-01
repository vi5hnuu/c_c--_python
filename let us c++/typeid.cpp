#include<iostream>
#include<typeinfo>
using namespace std;


class base{
public:
virtual void fun1(){}
};
class myclass:public base{};
class yourclass:public base{};

int main(){
base *p1,*p2;
myclass m;
yourclass y;
p1=&m;
p2=&y;

cout<<typeid(p1).name()<<endl;
cout<<typeid(p2).name()<<endl;
cout<<typeid(*p1).name()<<endl;
cout<<typeid(*p2).name()<<endl;

if(typeid(*p1)==typeid(*p2))
cout<<"Equal.";
else
cout<<"Not Equal."<<endl;

cout<<typeid(45).name()<<endl;
cout<<typeid('45').name()<<endl;
cout<<typeid(4.5+2.2).name()<<endl;
return 0;
}
