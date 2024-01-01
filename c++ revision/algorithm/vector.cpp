#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;
v.push_back(10);
v.push_back(11);
v.push_back(12);
v.push_back(13);
v.push_back(14);
v.push_back(15);
v.push_back(16);
v[0]=55;
for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";
}
return 0;
}
