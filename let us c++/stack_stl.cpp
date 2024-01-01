#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int> stk;
stk.push(10);
stk.push(20);
stk.push(30);
stk.push(40);
stk.push(50);
int sz=stk.size();
cout<<"\nStack contain "<<sz<<" elements.";
cout<<endl;
while(!stk.empty()){
cout<<stk.top()<<" ";
stk.pop();
}
}
