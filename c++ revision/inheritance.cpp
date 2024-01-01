#include<iostream>
using namespace std;

class counter{
protected:
    unsigned int count;
public:
counter():count(0){cout<<"\nzero arg base\n";}
counter(int c):count(c){cout<<"\none arg base\n";}

unsigned int getcount() const{
return count;
}

counter operator ++ (){
return counter(++count);
}
};

class counter_der: public counter{
public:
    //counter_der():counter(){cout<<"\nzero arg derv\n";}
    counter_der(){cout<<"\nzero arg derv\n";}
    //counter_der(int c):counter(c){cout<<"\none arg derv\n";}
    counter_der(int c){cout<<"\none arg derv\n";}
    counter operator -- (){
    return counter(--count);
    }
};



int main(){
//counter_der c;
counter_der d(5);
//cout<<c.getcount();
cout<<d.getcount();
return 0;
}


// if base have zero arg and derv do not have any cons and conter_derv c is used it works and first base zero arg constructor is called and the base default constrictor is called
//if base have zero and 1 arg constructor and we ussed counter_derv c(5) then first bease class 1 arg construtir is clas\led and then derv classs(so define 1 arg in derv also)
//cont.. point 2 // if 1 arg is defined in counter_derv then it is necessary to define zero arg also else counter_derv c wont work as defineng 1 arg constructor disable defualt zero arg constructor.
