#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
int beginrange,endrange;
int arr[]={11,13,15,17,19,21,23,25,27};
vector<int> v1(arr,arr+10);
vector<int> v2(10);

cout<<"Enter range to be copied :";
cin>>beginrange>>endrange;

vector<int> :: iterator iter1=v1.begin()+beginrange; cout<<*iter1<<"   ";
vector<int> :: iterator iter2=v1.begin()+endrange; cout<<*iter2<<"  ";
vector<int> :: iterator iter3;
iter3=copy(iter1,iter2,v2.begin());
cout<<*iter3;
/*iter1=v2.begin();
while(iter1!=iter3)
cout<<*iter1++<<' ';
cout<<endl;*/
return 0;
}
