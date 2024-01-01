#include<iostream>
#include<new>//bad_alloc
using namespace std;

int main(){
long *p[100];
try{
for(int i=0;i<100;i++){
p[i]=new long[500000000];
cout<<i<<" Array of long allocated"<<endl;
}
}
catch(bad_alloc &e){
cout<<"Failed to allocated memory :"<<e.what()<<endl;
}
}
