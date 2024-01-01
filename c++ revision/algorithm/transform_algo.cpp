#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int dbl(int a){return a*2;}

int main(){
int arr[]={2,54,8,6,2,48,6,2,6};
int *arrr=new int[sizeof(arr)/sizeof(int)];
transform(arr,arr+9,arrr,dbl);
for(int i=0;i<9;i++)
cout<<arrr[i]<<endl;
return 0;
}
