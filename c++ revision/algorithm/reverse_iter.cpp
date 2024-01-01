#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
int arr[]={2,4,6,8,10};
list<int> thelist;
for(int j=0;j<5;j++)
thelist.push_back(arr[j]);

list<int> ::reverse_iterator iter;

iter=thelist.rbegin();
while(iter!=thelist.rend())
cout<<*iter++<<' ';
cout<<endl;
return 0;
}
