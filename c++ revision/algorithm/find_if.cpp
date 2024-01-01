#include<iostream>
#include<algorithm>
using namespace std;

bool don(string name){return name=="manisha";};

int main(){
string names[]={"vishnu","krishan","laxmi","pooja","manisha","prakash"};
string *ptr;
ptr=find_if(names,names+6,don);
if(ptr==names+5)
cout<<"name not in the list";
else{
cout<<"Name is in the list at "<<ptr-names<<" on the list.";
}
return 0;

}
