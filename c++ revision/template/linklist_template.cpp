/*#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};

class linklist{
private:
int data;
node *first;
public:
linklist(){first=NULL;}
void additem(int d);
void display();
};

void linklist::additem(int d){
if(first==NULL){
node *newnode=new node;
newnode->data=d;
newnode->next=NULL;
first=newnode;
}
else{
node *temp;
temp=first;
node *newnode=new node;
newnode->data=d;
newnode->next=NULL;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newnode;
}
}

void linklist::display(){
node *temp;
temp=first;
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->next;
}
}

int main(){
linklist l1;
l1.additem(0);
l1.additem(1);
l1.additem(2);
l1.additem(3);
l1.additem(4);
l1.additem(5);
l1.additem(6);
l1.additem(7);
l1.additem(8);
l1.additem(9);
l1.display();
return 0;
}*/

///////////////////////////////template/////////////////////////////////

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
linklist<int> l1;
l1.additem(0);
l1.additem(1);
l1.additem(2);
l1.additem(3);
l1.additem(4);
l1.additem(5);
l1.additem(6);
l1.additem(7);
l1.additem(8);
l1.additem(9);
l1.display();

linklist<long> l2;
l2.additem(0);
l2.additem(111);
l2.additem(2346);
l2.additem(3564498);
l2.additem(4);
l2.additem(5545);
l2.additem(684);
l2.additem(75);
l2.additem(854);
l2.additem(954);
l2.display();
return 0;
}
