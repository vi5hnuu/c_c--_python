#include<iostream>
using namespace std;

class alpha{
private:
int data;
public:
alpha(){}
alpha(int d){data=d;}
alpha(alpha &a){data=a.data; cout<<"\ncopy constructor invoked.\n";}
void display(){cout<<data;}

};

int main(){
alpha a1(37);
alpha a2;
a2=a1;//default assignment operator
cout<<"\na2=";a2.display();
alpha a3=a2;
cout<<"\na3=";a3.display();
cout<<endl;
return 0;
}
