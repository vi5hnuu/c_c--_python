#include<iostream>
using namespace std;

int main(){
const unsigned long size=100000;
char *ptr;

try{
ptr=new char[size];
}
catch(bad_alloc){
cout<<"\nFailed to allocate memory.\n";
return 1;
}
delete[] ptr;
cout<<"\nAllocation successful.";
return 0;
}
