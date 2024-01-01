#include<iostream>
#include<iomanip>
#include<algorithm>
#include<functional>
using namespace std;


int main(){
int arr[]={2,54,8,6,2,48,6,2,6};
sort(arr,arr+8,greater<int>());
//cout.width(10);
for(int i=0;i<9;i++)
cout<<setw(5)<<arr[i];
return 0;

}
