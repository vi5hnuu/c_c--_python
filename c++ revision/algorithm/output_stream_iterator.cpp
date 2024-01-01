#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
int arr[]={1,3,5,7,9};
list<int> thelist;

for(int j=0;j<5;j++)
thelist.push_back(arr[j]);

ostream_iterator<int> oister(cout,", ");

cout<<"The contents of the list are :";
copy(thelist.begin(),thelist.end(),oister);
cout<<endl;
return 0;
return 0;
}
