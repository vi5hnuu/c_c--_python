#include<iostream>
using namespace std;

const int MAX=3;

class stack{
private:
int st[MAX];
int top;
public:
class Full{};
class Empty{};
stack(){top=-1;}
void push(int var){
if(top>=MAX-1)
throw Full();
st[++top]=var;
}
int pop(){
if(top<0)
throw Empty();
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
cout<<s1.pop()<<endl;
}
catch(stack::Full){
cout<<"Exception:stack full.";
}
catch(stack::Empty){
cout<<"Exception:stack Empty.";
}
return 0;
}
