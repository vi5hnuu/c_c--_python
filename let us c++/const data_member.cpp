#include<iostream>
using namespace std;

class A{
private:
const int num;
public:
//void assign(int a) const{num=a}//it cant modify obj of which it is member
//void assign(int a) {num=a}//it cant modify constant mem of obj of which it is member
//so use constructor....for every obj it assign value to num and it is forever constant by then
A():num(15){}
void show(){cout<<num;}
};

int main(){
A b,c;
b.show();
c.show();
return 0;
}
