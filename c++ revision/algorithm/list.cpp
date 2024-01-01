#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> l1;
l1.push_back(30);
l1.push_back(40);
l1.push_back(50);
l1.push_front(20);
l1.push_front(10);
cout<<l1.size()<<endl;
for(int i=0;i<l1.size();i++){
cout<<l1.front()<<' ';
l1.pop_front();
}
return 0;
}
