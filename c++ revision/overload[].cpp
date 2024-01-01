#include<iostream>
using namespace std;

class safearray{
private:
int a[5];
public:
int & operator [] (int n){
return a[n];
}
};

int main(){
safearray a;
for(int i=0;i<5;i++)
a[i]=i;
for(int i=0;i<5;i++)
cout<<a[i];
}
