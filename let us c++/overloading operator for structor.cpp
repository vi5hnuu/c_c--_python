/*#include<iostream>
using namespace std;

struct complex{
double real,imag;
};

complex setcomplex(double r,double img);
void printcomplex(complex x);
complex operator + (complex c,complex d);
complex operator - (complex c,complex d);

int main(){
complex a,b,c,d;
a=setcomplex(1.0,1.0);
b=setcomplex(2.0,2.0);
c=a+b;
d=b+c-a;
cout<<"c = ";
printcomplex(c);
cout<<"\nd = ";
printcomplex(d);
return 0;
}

complex setcomplex(double r,double img){
complex temp;
temp.real=r;
temp.imag=img;
return temp;
}

void printcomplex(complex x){
cout<<x.real<<" "<<x.imag;
}

complex operator + (complex c,complex d){
complex temp;
temp.real=c.real+d.real;
temp.imag=c.imag+d.imag;
return temp;
}

complex operator - (complex c,complex d){
complex temp;
temp.real=c.real-d.real;
temp.imag=c.imag-d.imag;
return temp;
}*/

//////////////////

/*
#include<iostream>
using namespace std;

struct complex{
double real,imag;
}temp;

complex& setcomplex(double r,double img);
void printcomplex(const complex &x);
complex& operator + (const complex &c,const complex &d);
complex& operator - (const complex &c,const complex &d);

int main(){
complex a,b,c,d;
a=setcomplex(1.0,1.0);
b=setcomplex(2.0,2.0);
c=a+b;
d=b+c-a;
cout<<"c = ";
printcomplex(c);
cout<<"\nd = ";
printcomplex(d);
return 0;
}

complex& setcomplex(double r,double img){
temp.real=r;
temp.imag=img;
return temp;
}

void printcomplex(const complex &x){
cout<<x.real<<" "<<x.imag;
}

complex& operator + (const complex &c,const complex &d){

temp.real=c.real+d.real;
temp.imag=c.imag+d.imag;
return temp;
}

complex& operator - (const complex &c,const complex &d){

temp.real=c.real-d.real;
temp.imag=c.imag-d.imag;
return temp;
}*/

//////////////////////

#include<iostream>
using namespace std;

struct complex{
double real,imag;

complex setcomplex(double r,double img){
real=r;
imag=img;
}

void printcomplex(){
cout<<real<<" "<<imag;
}

complex operator + (complex c){
complex temp;
temp.real=real+c.real;
temp.imag=imag+c.imag;
return temp;
}

complex operator - (complex c){
complex temp;
temp.real=real-c.real;
temp.imag=imag-c.imag;
return temp;
}
};

int main(){
complex a,b,c,d;
a.setcomplex(1.0,1.0);
b.setcomplex(2.0,2.0);
c=a+b;
d=b+c-a;
cout<<"c = ";
c.printcomplex();
cout<<"\nd = ";
d.printcomplex();
return 0;
}


