#include<iostream>
#include<algorithm>
using namespace std;


int main(){
int arr[]={11,22,33,44,55,66,33,77,88};
int c;
c=count(arr,arr+8,33);
cout<<"the number is repeated "<<c<<" times.";
return 0;

}
