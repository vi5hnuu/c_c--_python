#include<iostream>
using namespace std;

template<class t>
double getsum(t a){ //necessary for below function
return a;
}

template<class t,class...s>
double getsum(t a,s...rest){
return a+getsum(rest...);
}

int main(){
double s1=getsum(10);
double s2=getsum(10,20,30);
double s3=getsum(10,20,30,40);
cout<<s1<<endl<<s2<<endl<<s3;
return 0;
}
