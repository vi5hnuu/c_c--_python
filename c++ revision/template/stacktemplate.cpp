/*#include<iostream>
using namespace std;
const int MAX=100;

template<class type>
class stack{
private:
type st[MAX];
int top;
public:
stack(){top=-1;}
void push(type var){st[++top]=var;}
type pop(){return st[top--];}
};

int main(){
stack<float> s1;
s1.push(1111.2f);
s1.push(2222.2f);
s1.push(3333.2f);
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;

stack<int> s2;
s2.push(12);
s2.push(13);
s2.push(14);
s2.push(15);
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
}*/

///////////////

#include<iostream>
using namespace std;
const int MAX=100;

template<class type>
class stack{
private:
type st[MAX];
int top;
public:
stack();
void push(type var);
type pop();
};
template<class type>
stack<type>::stack(){top=-1;}

template<class type>
void stack<type>::push(type var){
st[++top]=var;
}
template<class type>
type stack<type>::pop(){
return st[top--];
}

int main(){
stack<float> s1;
s1.push(1111.2f);
s1.push(2222.2f);
s1.push(3333.2f);
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;

stack<int> s2;
s2.push(12);
s2.push(13);
s2.push(14);
s2.push(15);
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
cout<<s2.pop()<<endl;
}
