#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


class person{
private:
string lastname;
string firstname;
long phonenumber;
public:
person():lastname("blank"),firstname("blank"),phonenumber(0){}
person(string x,string y,long z):lastname(x),firstname(y),phonenumber(z){}
 friend bool operator < (const person& ,const person &);
 friend bool operator == (const person& ,const person &);
 void display() const{
 cout<<endl<<lastname<<",\t"<<firstname<<"\t\tphone"<<phonenumber;
 }
 long get_phone() const{
 return phonenumber;
 }
};

bool operator < (const person& p1,const person &p2){
if(p1.lastname==p2.lastname)
return (p1.firstname<p2.firstname) ?true :false;
return (p1.lastname<p2.lastname)?true:false;
}

bool operator == (const person& p1,const person &p2){
return (p1.lastname==p2.lastname) && (p1.firstname==p2.firstname) ?true :false;
}

class compareperson{
public:
    bool operator ()(const person *ptrp1,const person *ptrp2) const{
    return *ptrp1<*ptrp2;
    }
};

 class displayperson{
 public:
     void operator ()(const person *ptrp) const{
     ptrp->display();
     }
 };

 int main(){
 vector<person*> vectptrspers;

 person *ptrp1=new person("kumar","vishnu",123);
 person *ptrp2=new person("kumar","krishan",456);
 person *ptrp3=new person("kumari","manisha",4567);
 person *ptrp4=new person("devi","pooja",457);
 person *ptrp5=new person("chand","prakash",457);
 vectptrspers.push_back(ptrp1);
 vectptrspers.push_back(ptrp2);
 vectptrspers.push_back(ptrp3);
 vectptrspers.push_back(ptrp4);
 vectptrspers.push_back(ptrp5);

 for_each(vectptrspers.begin(),vectptrspers.end(),displayperson());

 sort(vectptrspers.begin(),vectptrspers.end());
 cout<<"\nsorted pointers :";
 for_each(vectptrspers.begin(),vectptrspers.end(),displayperson());
 sort(vectptrspers.begin(),vectptrspers.end(),compareperson());
 cout<<"\nsorted persons :";
 for_each(vectptrspers.begin(),vectptrspers.end(),displayperson());

 while(!vectptrspers.empty()){
    delete vectptrspers.back();
     vectptrspers.pop_back();
 }
 cout<<endl;
 return 0;
 }
