#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class  person{
private:
string lastname;
string firstname;
long phonenumber;
public:
person():lastname("blank"),firstname("blank"),phonenumber(0){}
person(string x,string y,long z):lastname(x),firstname(y),phonenumber(z){}

friend bool operator <(const person&,const person&);
friend bool operator >(const person&,const person&);
friend bool operator !=(const person&,const person&);
friend bool operator ==(const person&,const person&);

long get_phone() const{
return phonenumber;
}

void display() const{
cout<<"\nLAst name"<<"\t"<<lastname<<endl<<"\nfirst name"<<"\t"<<firstname<<endl<<"phone number\t"<<phonenumber;
}
};

bool operator <(const person &p1,const person &p2){
if(p1.lastname==p2.lastname)
return (p1.firstname <p2.firstname) ?true :false;
return (p1.lastname <p2.lastname) ?true :false;
}
bool operator !=(const person &p1,const person &p2){
return !(p1==p2);
}

bool operator ==(const person &p1,const person &p2){
return (p1.lastname==p2.lastname && p1.firstname==p2.firstname) ?true:false;
}

bool operator >(const person &p1,const person &p2){
return !(p1<p2) && !(p1==p2);
}

int main(){
list<person> perslist;
list<person>::iterator iter;
perslist.push_back(person("kumar","vishnu",97858));
perslist.push_back(person("kumar","vishnu",97857));
perslist.push_back(person("kumar","kishan",975857));
perslist.push_back(person("kumar","krishan",9857));
perslist.push_back(person("chand","prakash",9857));
perslist.push_back(person("kumari","manisha",9856));

cout<<"\nNumber of entries "<<perslist.size();

iter=perslist.begin();
while(iter!=perslist.end());
(*iter++).display();

string searchlastname,searchfirstname;
cout<<"\nEnter last name and first name :";
cin>>searchlastname;
cin>>searchfirstname;

person searchperson(searchlastname,searchfirstname,0);

iter=find(perslist.begin(),perslist.end(),searchperson);
if(iter!=perslist.end()){
cout<<"\nPerson found.\n";
do{
(*iter++).display();
iter=find(iter,perslist.end(),searchperson);
}while(iter!=perslist.end());
}else
cout<<"\nThere is no person with this name.\n";

cout<<"\nEntr phone number :";
long numb;
cin>>numb;

bool foundone=false;

for(iter=perslist.begin();iter!=perslist.end();iter++){
if(numb==(*iter).get_phone()){
if(!foundone){
cout<<"Person with the phone number is(are) :\n";
foundone=true;
}
(*iter).display();
}
}
if(!foundone)
cout<<"\nThere is no person with  this phone number.";
cout<<endl;
return 0;
}
