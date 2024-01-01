#include<iostream>
using namespace std;

class A{
private:
static int a;
public:
void show(){cout<<a++<<endl;}
static void showw(){cout<<a++<<endl;}
};

int A::a=0;

int main(){
A a;
a.show();
a.showw();
A::showw();
}
