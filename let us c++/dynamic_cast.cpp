#include<iostream>
using namespace std;

class employee{
private:
string name;
public:
    employee(){}
employee(string name){this->name=name;}

virtual void showdata(){cout<<"name :"<<name<<endl;}
};

class manager :public employee{
private:
double commission;
public:
manager(string n,double c):employee(n){commission=c;}
/*manager(string n,double c){
employee(n);//wont work..ctor can be called via inilitizer list
//if employee(n) commented it will call zero arg in base.
    commission=c;
    }*/
virtual void showdata(){
cout<<"commission :"<<commission<<endl;
}
};

int main(){
employee e1("vishnu");
manager m1("krishan",3000.0);

employee *pemp1,*pemp2,*p;
manager *pmgr;

pemp1=&e1;
pemp2=&m1;
pmgr=dynamic_cast<manager *>(pemp1);
cout<<"pmgr = "<<pmgr<<endl;

if(pmgr)
pmgr->showdata();
else{
cout<<"pngr contain null on downcasting"<<endl;
}
pmgr=dynamic_cast<manager *>(pemp2);
cout<<"pmgr = "<<pmgr<<endl;
if(pmgr)
pmgr->showdata();
else{
cout<<"pngr contain null on downcasting"<<endl;
}

p=dynamic_cast<employee *>(pemp2);
cout<<"pmgr = "<<pmgr<<endl;
if(pmgr)
pmgr->showdata();
else{
cout<<"pngr contain null on downcasting"<<endl;
}
return 0;
}
