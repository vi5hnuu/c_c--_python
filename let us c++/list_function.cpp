#include<iostream>
#include<list>
using namespace std;

int main(){
list<int> ls;
ls.push_back(30);
ls.push_back(40);
ls.push_back(50);
ls.push_front(20);
ls.push_front(10);
cout<<"\nList elements :";
for(auto num:ls)
cout<<num<<" ";
cout<<endl;

cout<<"\nElement at fornt "<<ls.front();
cout<<"\nElement at back "<<ls.back();
ls.pop_front();
ls.pop_back();

cout<<"\nElements after deletion :";
for(auto num:ls)
cout<<num<<" ";
cout<<endl;

list<int>::iterator itr;
itr=ls.end();
itr--;
ls.insert(itr,-20);
itr--;
itr--;
ls.insert(itr,67);
itr++;
ls.insert(itr,33);

cout<<"\nList after insertion :";
for(auto x:ls)
cout<<x<<" ";
cout<<endl;

itr=ls.begin();
ls.erase(itr);
cout<<"\nList after eraseing one item :\n";
for(auto x:ls)
cout<<x<<" ";
cout<<endl;

ls.reverse();
cout<<"Reversed list :";
for(auto x:ls)
cout<<x<<" ";
cout<<endl;

ls.sort();
cout<<"Sorted list :";
for(auto x:ls)
cout<<x<<" ";
cout<<endl;

ls.sort(greater<int>());
cout<<"Reverse sortef list :";
for(auto x:ls)
cout<<x<<" ";
cout<<endl;

ls.clear();
return 0;
}
