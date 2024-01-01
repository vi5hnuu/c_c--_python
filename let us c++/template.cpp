/*#include<iostream>
using namespace std;

template<class t>

void fun(t a,t b){
return a+b;
}

int main(){
//cout<<fun(2,3.5);
cout<<fun(2.2f,3.5);
return 0;
}*/

#include<iostream>
using namespace std;

template<class t>

t fun(t a,t b){
return a+b;
}
/*float fun(float a,float b){
return a+b;
}*/

int main(){
//    cout<<fun(2,3.5);
cout<<fun(2.2f,3.5);
return 0;
}
