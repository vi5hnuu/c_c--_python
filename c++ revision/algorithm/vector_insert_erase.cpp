#include<iostream>
#include<vector>
using namespace std;

int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
vector<int> v(arr,arr+10);
cout<<"\nBefore insertion.\n";
for(int i=0;i<v.size();i++)
cout<<v[i]<<' ';
v.insert(v.begin()+2,115);
cout<<"\nAfter insertion.\n";
for(int i=0;i<v.size();i++)
cout<<v[i]<<' ';
v.erase(v.begin()+2);
cout<<"\nAfter erasing.\n";
for(int i=0;i<v.size();i++)
cout<<v[i]<<' ';
return 0;
}
