#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v1{10,20,30,40};
v1.push_back(50);
v1.push_back(60);
v1.push_back(70);
v1.push_back(80);
v1.push_back(90);
v1.push_back(100);
cout<<v1.front()<<endl;
cout<<v1.front()<<endl;
cout<<v1.back()<<endl;
cout<<v1.back()<<endl;
cout<<v1.at(0)<<endl;
cout<<v1.at(1)<<endl;

vector<int>::iterator itr;
itr=v1.begin();
*itr=35;
v1[1]=36;
itr+=4;
*itr=37;

itr=v1.begin();
v1.insert(itr,0);

itr=v1.begin();
itr+=2;
v1.erase(itr);

v1.pop_back();
v1.pop_back();

cout<<"size "<<v1.size()<<endl;
cout<<"size "<<v1.max_size()<<endl;
cout<<"size "<<v1.capacity()<<endl;
v1.resize(100);

v1.clear();
bool b=v1.empty();
cout<<b;
}
