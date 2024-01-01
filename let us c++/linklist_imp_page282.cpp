#include<iostream>
#include<string>
using namespace std;

class employee{
private:
string name;
int age;
float sal;
public:
employee(string n=" ",int a=0,float s=0.0);
friend ostream& operator <<(ostream &s,employee &e);
};

employee::employee(string n,int a,float s){name=n;age=a;sal=s;}

ostream& operator <<(ostream &s,employee &e){
s<<"\t"<<e.name<<"\t"<<e.age<<"\t"<<e.sal<<endl;
}
///////////////////////////////////////////////////////
template<class t>
class linklist{
private:
struct node{
t data;
node *link;
}*next;
public:
linklist();
~linklist();
void append(t);
void addatbeg(t);
void addafter(int,t);
void del(int pos);
void display();
int count();
};
template<class t>
linklist<t>::linklist(){next=NULL;}
////////////////////////////////////

template<class t>
linklist<t>::~linklist(){
    node *temp=next;
    node *next;
    while(temp!=NULL){
    next=temp->link;
    delete temp;
    temp=next;
    cout<<"dtor\n";
    }
    }
///////////////////////////////////////
template<class t>
void linklist<t>::del(int pos){
node *prev=next;
node *del;
node *n;
for(int i=0;i<pos-1;i++)
    prev=prev->link;
del=prev->link;
n=del->link;
delete del;
prev->link=n;
}
///////////////////////////////////////
template<class t>
void linklist<t>::addafter(int pos,t d){
node *temp=next;
node *n;

if(pos<0){
    cout<<"Invalid position.";
exit(1);
}
for(int i=0;i<pos-1;i++){
    temp=temp->link;
if(temp==NULL){
    cout<<"position out of bound.";
    exit(1);
}
}
    n=temp->link;
    temp->link=new node;
    temp->link->data=d;
    temp->link->link=n;
}

///////////////////////////////////////
template<class t>
void linklist<t>::addatbeg(t d){
node *temp=next;
node *newnode=new node;
newnode->data=d;
newnode->link=temp;
next=newnode;
}

////////////////////////////////////////
template<class t>
int linklist<t>::count(){
int count;
node *temp=next;
if(temp==NULL)
    cout<<0;
else{
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
}
return count;
}

////////////////////////////////////////

template<class t>
void linklist<t>::append(t d){
node *temp=next;
if(temp==NULL){
temp=new node;
temp->data=d;
temp->link=NULL;
next=temp;
}
else{
while(temp->link!=NULL)
temp=temp->link;

temp->link=new node;
temp->link->data=d;
temp->link->link=NULL;
}
}

template<class t>
void linklist<t>::display(){
node *temp=next;
while(temp!=NULL){
cout<<temp->data<<"\t"<<endl;
temp=temp->link;
}
}

//////////////////////////////////////

int main(){
/*linklist<int> l1;
cout<<"No of elements in the linklist "<<l1.count()<<endl;
l1.append(11);
l1.append(22);
l1.append(33);
l1.append(44);
l1.append(55);
l1.addatbeg(100);
l1.addatbeg(200);
l1.addatbeg(300);
l1.addafter(3,333);
l1.addafter(6,666);
//l1.addafter(-6,666);
//l1.addafter(25,666);
l1.display();
cout<<"\nNo of elements in the linklist "<<l1.count()<<endl;
*/

linklist<employee> l2;
cout<<"No of elements in the linklist "<<l2.count()<<endl;
employee e1("vishnu",20,1000);
employee e2("krishan",21,2000);
employee e3("laxmi",22,7000);
employee e4("manisha",23,8000);
employee e5("pooja",24,5000);
l2.append(e1);
l2.append(e2);
l2.append(e3);
l2.append(e4);
l2.append(e5);
l2.display();
l2.del(3);
l2.display();
cout<<"No of elements in the linklist "<<l2.count()<<endl;
l2.addatbeg(e5);
l2.display();
l2.addafter(3,e1);
l2.display();
cout<<"No of elements in the linklist "<<l2.count()<<endl;
return 0;
}
