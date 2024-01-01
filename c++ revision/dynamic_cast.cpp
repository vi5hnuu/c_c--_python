#include<iostream>
using namespace std;

class Base{
private:
virtual void vertfunc(){}
};

class derv1 :public Base{};
class derv2 :public Base{};

bool isderv1(Base *unknown){
derv1 *p;
if(p==dynamic_cast<derv1 *>(unknown))
return true;
else
return false;
}
int main(){
derv1 *d1=new derv1;
derv2 *d2=new derv2;
if(isderv1(d1))
cout<<"\nderv1 obj.";
else
cout<<"\nnot derv1 obj.";

if(isderv1(d2))
cout<<"\nderv1 obj.";
else
cout<<"\nnot derv1 obj.";
}
