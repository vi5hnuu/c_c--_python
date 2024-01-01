#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int arr[8]={0,4,5,6,2,3,1,7};
sort(arr,arr+8);
for(int i=0;i<8;i++)
cout<<arr[i];
return 0;
}
