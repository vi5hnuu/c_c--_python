#include<iostream>
using namespace std;

class person{
private:
string name;
public:
void setname(){cout<<"Enter name :";cin>>name;}
void printname(){cout<<endl<<name;}
string getname(){return name;}
};

int main(){
void bsort(person **,int);
person *persptr[100];
int n=0;
char choice;

do{
persptr[n]=new person;
persptr[n]->setname();
n++;
cout<<"\nEnter another :";
cin>>choice;
}while('y'==tolower(choice));

cout<<"\nUnsorted list.\n";
for(int j=0;j<n;j++)
persptr[j]->printname();

bsort(persptr,n);
cout<<"\nsorted list.\n";
for(int j=0;j<n;j++)
persptr[j]->printname();
}

void bsort(person **pp,int n){
void order(person **,person **);

for(int j=0;j<n-1;j++)
for(int k=j+1;k<n;k++)
order(pp+j,pp+k);
}

void order(person **pp1,person **pp2){
if((*pp1)->getname()>(*pp2)->getname()){
person *temp=*pp1;
*pp1=*pp2;
*pp2=temp;
}
}

