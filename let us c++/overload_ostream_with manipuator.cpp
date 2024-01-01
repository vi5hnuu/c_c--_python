#include<iostream>
using namespace std;

class A{
private:
int data;
public:
A(){data=50;}

friend ostream& operator << (ostream &s,A &m);
};
///////////standalone////////
ostream& space(ostream &s){
    s<<"    ";
    return s;
}
///////////////////////////////
ostream& operator << (ostream &s,A &m){
s<<m.data;
return  s;
}

int main(){
A a;
cout<<a<<space<<a<<space<<a;
return 0;
}
