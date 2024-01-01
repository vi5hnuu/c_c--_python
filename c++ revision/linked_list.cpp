#include<iostream>
using namespace std;


struct node{
int data;
node *next;
};

class linked_list{
private:
node *first;
public:
linked_list(){first=NULL;}
~linked_list(){
    node *temp;
    node *temp1;
    temp=first;
    temp1=temp->next;
while(temp!=NULL){
delete(temp);
temp=temp1;
if(temp!=NULL)
temp1=temp1->next;
cout<<"\ndeleting...";}
}
void display(){
node *Alink;
Alink=first;
while(Alink!=NULL){
    cout<<Alink->data;
    Alink=Alink->next;
}
}

void additem(int d){
if(first==NULL){
node *newnode=new node;
newnode->data=d;
newnode->next=NULL;
first=newnode;
}
else{
node *temp;
temp=first;
while(temp->next!=NULL)
temp=temp->next;
node *newnode=new node;
newnode->data=d;
newnode->next=NULL;
temp->next=newnode;
}
}
};


int main(){
linked_list l1;
l1.additem(5);
l1.additem(6);
l1.additem(7);
l1.additem(8);
l1.additem(9);
l1.display();
return 0;
}
