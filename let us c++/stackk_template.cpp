#include<iostream>
using namespace std;

const int MAX=10;
class Complex;
template<class t>
class Stack{ //capital S for stack as stack is overloaded laready in c++
private:
t stk[MAX];
int top;
public:
Stack(){top=-1;}
void push(t data){
if(top==MAX-1)
cout<<"Stack is full.";
else
stk[++top]=data;
}

t pop(){
if(top==-1){
cout<<"Stack is empty.";
return NULL;
}
else{
//return stk[top--];
t data=stk[top];
top--;
return data;
}
}
};


class Complex{
private:
float real,imag;
public:
   /* Complex(Complex &a){
real=a.real;imag=a.imag;
cout<<"cpy calld.";
}*/
Complex(float r=0.0,float i=0.0){real=r;imag=i;}
friend ostream& operator << (ostream &s,const Complex &c);
//friend ostream& operator << (ostream &s, Complex &c);
};

//ostream& operator << (ostream &s,Complex &c){
ostream& operator << (ostream &s,const Complex &c){
s<<"("<<c.real<<","<<c.imag<<")";
return s;
}

int main(){
Stack<int> s1;
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;

Stack<float> s2;
s2.push(3.14f);
s2.push(4.14f);
s2.push(5.14f);
s2.push(6.14f);
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;

Complex c1(1.5f,2.5f),c2(1.5f,2.5f),c3(1.5f,2.5f),c4(1.5f,2.5f);
//cout<<c1;

Stack<Complex> s3; //
s3.push(c1);
s3.push(c2);
s3.push(c3);
s3.push(c4);
cout<< s3.pop()<<endl;
cout<< s3.pop()<<endl;
cout<< s3.pop()<<endl;
cout<< s3.pop()<<endl;
cout<< s3.pop()<<endl;
return 0;
}
