#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

int main(){
set<string,less<string> > organic;
set<string,less<string> >::iterator iter;
organic.insert("vishnu");
organic.insert("krishan");
organic.insert("laxmi");
organic.insert("pooja");
organic.insert("manisha");
organic.insert("prakash");
organic.insert("kishan");

iter=organic.begin();
while(iter!=organic.end())
cout<<*iter++<<'\n';

string  lower,upper;
cout<<"\nEnter the range :";
cin>>lower>>upper;
iter=organic.lower_bound(lower);
while(iter!=organic.upper_bound(upper))
cout<<*iter++<<'\n';
return 0;
}
