#include<iostream>
using namespace std;

class sample{
public:
void fun1(){cout<<this<<" in fun1"<<endl;
}
void fun2(){cout<<this<<" in fun2"<<endl;
}
void fun3(){cout<<this<<" in fun3"<<endl;
}
};

int main(){
sample s[4];
void (sample::*p[3])()={&sample::fun1,&sample::fun2,&sample::fun3};

for(int i=0;i<=3;i++){
for(int i=0;i<3;i++)
(s[i].*p[i])();
}
return 0;
}
