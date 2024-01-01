#include<iostream>
using namespace std;

class base{
private:
int i;
public:
base(int ii){i=ii;}

virtual void fun1(){cout<<endl<<i<<endl;}
};

class derived:public base{
private:
int j;
public:
derived(int ii,int jj):base(ii){
j=jj;
}

void fun1(){
base::fun1();
cout<<endl<<j<<endl;
}
};



int main(){
base b(10);
derived d(15,20);

base *p=&b;
p->fun1();

p=&d;
p->fun1();

base &q=b;
q.fun1();

base &m=d;
m.fun1();

b=d;
b.fun1();
return 0;
}
