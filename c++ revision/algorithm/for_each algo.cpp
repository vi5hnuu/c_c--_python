#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

void dbl(int a){cout<<a<<setw(5)<<2*a<<endl;}

int main(){
int arr[]={2,54,8,6,2,48,6,2,6};
for_each(arr,arr+9,dbl);
return 0;
}
