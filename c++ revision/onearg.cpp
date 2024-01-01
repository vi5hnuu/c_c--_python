#include<iostream>
using namespace std;

class alpha{
private:
int data;
public:
alpha(){}
alpha(int d){data=d; cout<<"one arg";}

};

int main(){
alpha a1(37);
alpha a2=(37);

return 0;
}
