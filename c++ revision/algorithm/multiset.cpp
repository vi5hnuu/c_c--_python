#include<iostream>
#include<set>
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
friend bool operator ==(const person&,const person&);

void display() const{
cout<<"\nLAst name"<<"\t"<<lastname<<endl<<"\nfirst name"<<"\t"<<firstname<<endl<<"phone number\t"<<phonenumber;
}
};

bool operator <(const person &p1,const person &p2){
if(p1.lastname==p2.lastname)
return (p1.firstname <p2.firstname) ?true :false;
return (p1.lastname <p2.lastname) ?true :false;
}

bool operator ==(const person &p1,const person &p2){
return (p1.lastname==p2.lastname && p1.firstname==p2.firstname) ?true:false;
}

int main(){
person pers1("kumar","vishnu",9855892);
person pers2("kumar","krishan",4169639);
person pers3("kumar","kishan",9099782);
person pers4("chand","prakash",4339065);
person pers5("devi","pooja",9874007);
person pers6("devi","pooja",9834008);

multiset<person,less<person> >perset;
multiset<person,less<person> >::iterator iter;

perset.insert(pers1);
perset.insert(pers2);
perset.insert(pers3);
perset.insert(pers4);
perset.insert(pers5);
perset.insert(pers6);

cout<<"\nNumber of entries "<<perset.size();

iter=perset.begin();
while(iter!=perset.end())
(*iter++).display();

string searchlastname,searchfirstname;
cout<<"\nEnter last name of the person to search for :";cin>>searchlastname;
cout<<"\nEnter first name of the person to search for :";cin>>searchfirstname;

person searchperson(searchlastname,searchfirstname,0);

int cntperson=perset.count(searchperson);
cout<<"\nNumber of person with "<<searchlastname<<" as last name and "<<searchfirstname<<" as first name "<<cntperson;

iter=perset.lower_bound(searchperson);
while(iter!=perset.upper_bound(searchperson))
(*iter++).display();
cout<<endl;
return 0;
}
