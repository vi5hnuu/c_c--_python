#include<iostream>
using namespace std;

int a;
int &max(int m,int n){
static int z=m>n ?m:n;
return a;
}

int main(){

max(5,6)=10;
cout<<a;
return 0;
}
