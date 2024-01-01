/*#include<iostream>
using  namespace std;

namespace mine{
int a=5;
}

int main(){
cout<<mine::a;
return 0;
}*/

/*
#include<iostream>
using  namespace std;

namespace mine{
int a=5;
}
using namespace mine;
int main(){
cout<<a;
return 0;
}*/


#include<iostream>
using  namespace std;

namespace mine{
class myclass{
private:
    int yr;
public:
    void changeyear();
};
class yourclass;
void fun1();
}

void mine::myclass::changeyear(){
    yr=2000;
    cout<<"\nyears dont change.";
}

class mine::yourclass{
public:
    yourclass();
    void show();
};

mine::yourclass::yourclass(){
cout<<"\nReached yourclass zero constructor.";
}

void mine::yourclass::show(){
cout<<"\nDo it then dont think about it";
}

void mine::fun1(){
cout<<"\nBe implusive.Exercise caution"<<endl;
}

int main(){
mine::myclass m;
m.changeyear();
mine::fun1();
mine::yourclass y;
y.show();
return 0;
}
