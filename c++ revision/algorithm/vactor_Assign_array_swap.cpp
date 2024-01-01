#include<iostream>
#include<vector>
using namespace std;

int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
vector<int> v1(arr,arr+10);
vector<int> v2(10);
v1.swap(v2);
/*while(!v2.empty()){
cout<<v2.back()<<' ';
v2.pop_back();
}*/
int i=0,j=9;
while(!v2.empty()){
cout<<v2[i++]<<' '<<v2[j--]<<endl;
v2.pop_back();
}
cout<<endl;
return 0;
}
