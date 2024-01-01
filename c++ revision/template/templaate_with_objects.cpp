#include<iostream>
using namespace std;
const int LEN=80;

class employee{
private:
char name[LEN];
unsigned long number;
public:
friend istream& operator >>(istream& s,employee& e);
friend ostream& operator <<(ostream& s,employee& e);
};

istream& operator >>(istream& s,employee& e){
cout<<"\nEnter name ";s>>e.name;
cout<<"\nEnter number ";s>>e.number;
return s;
}

ostream& operator <<(ostream& s,employee& e){
s<<"\nname "<<e.name;
s<<"\nnumber "<<e.number;
return s;
}


///linked-list////
#include<iostream>
using namespace std;
template<class type>
struct node{
type data;
node<type> *next;
};

template<class type>
class linklist{
private:
type data;
node<type> *first;
public:
linklist(){first=NULL;}
void additem(type d);
void display();
};

template<class type>
void linklist<type>::additem(type d){
if(first==NULL){
node<type> *newnode=new node<type>;
newnode->data=d;
newnode->next=NULL;
first=newnode;
}
else{
node<type> *temp;
temp=first;
node<type> *newnode=new node<type>;
newnode->data=d;
newnode->next=NULL;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
}
}

template<class type>
void linklist<type>::display(){
node<type> *temp;
temp=first;
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->next;
}
}

int main(){
employee e,f,g;
cin>>e>>f>>g;
cout<<e<<endl;

linklist<employee> l1;
l1.additem(e);
l1.additem(f);
l1.additem(g);
l1.display();
return 0;
}

