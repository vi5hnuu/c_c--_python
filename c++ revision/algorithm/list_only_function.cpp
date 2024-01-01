#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> l1,l2;

int arr1[]={40,30,10,20};
int arr2[]={15,20,25,30,35};
for(int j=0;j<4;j++)
l1.push_back(arr1[j]);

for(int j=0;j<5;j++)
l2.push_back(arr2[j]);

l1.reverse();
l1.merge(l2);
l1.unique();
int size=l1.size();
for(int i=0;i<size;i++){
cout<<l1.front()<<' ';
l1.pop_front();
}
return 0;
}
