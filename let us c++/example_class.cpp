#include<iostream>
using namespace std;

class Example{
private:
int i;
float j;
public:
Example(int ii=0,float jj=0.0f){i=ii;j=jj;cout<<"ctor called "<<this<<"\n";}

void showdata() const{
cout<<i<<" "<<j<<endl;
}

Example operator *(Example e){ //if passwed by reference Example operator *(Example &e) e4=e1*2 will also not work as 2 is not onj.
int a=i*e.i;
float b=j*e.j;
return Example(a,b);
}

~Example(){cout<<"dtor called"<<this<<"\n";}
};

int main(){
Example e1(10,3.14f),e2(2,1.5f),e3,e4,e5;
e3=e1*e2;
e4=e1*2;
e3.showdata();
e4.showdata();
//e5=2*e1;
return 0;
}
