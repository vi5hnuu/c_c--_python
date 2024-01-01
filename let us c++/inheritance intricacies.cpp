#include<iostream>
using namespace std;

class base{
protected:
int data;
public:
base(){data=500;}
};

class derived1:virtual public base{

};
class derived2:virtual public base{

};

//class derived3:virtual public derived1,virtual public derived2{
class derived3:public derived1,public derived2{
public:
int getdata(){
return data;
}
};

int main(){
derived3 obj;
int z=obj.getdata();
cout<<z;
return 0;
}
