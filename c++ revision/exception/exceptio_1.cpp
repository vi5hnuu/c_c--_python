#include<iostream>
using namespace std;

const int MAX=3;

class stack{
private:
int st[MAX];
int top;
public:
class range{};
stack(){top=-1;}
void push(int var){
if(top>=MAX-1)
throw range();
st[++top]=var;
}
int pop(){
if(top<0)
throw range();
return st[top--];
}
};

int main(){
stack s1;
try{
s1.push(11);
s1.push(22);
s1.push(33);
//s1.push(44);
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
//cout<<s1.pop()<<endl;
}
catch(stack::range){
cout<<"Exception:stack full.";
}
return 0;
}
