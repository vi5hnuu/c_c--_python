#include<iostream>
using namespace std;


class base{};
class derived:public base{};
class sample{};

int main(){
int i=10;
long l;
float f;
char str[]="vishnu kumar";

i=static_cast<int>(l);
i=static_cast<int>(f);

void *ptr;
ptr=static_cast<void *>(str);
cout<<ptr<<endl;

sample *p;
base *b;
p=(sample *)b;

//p=static_cast<sample *>(b);
//this means static_cast wont allow us to cast indiscriminately making it safer than traditional casting.
return 0;
}
