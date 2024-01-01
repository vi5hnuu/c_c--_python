#include<iostream>
using namespace std;

class A{
private:
int data;
public:
A(){data=50;}

friend ostream& operator << (ostream &s,A &m);

};

ostream& operator << (ostream &s,A &m){
s<<m.data;
return  s;
}

int main(){
A a;
cout<<a;
return 0;
}
