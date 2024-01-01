#include<iostream>
using namespace std;


class vehicle{
public:
virtual void speed(){
cout<<endl<<"in sppeed of vehicle.";
}

virtual void maintainance(){
cout<<endl<<"in maintainance of vehicle.";
}

void value(){
cout<<endl<<"in value of vehicle.";
}
};

class fourwheeler :public vehicle{
public:
 void speed(){
cout<<endl<<"in sppeed of fourwheeler.";
}

void maintainance(){
cout<<endl<<"in maintainance of fourwheeler.";
}
};

class twowheeler :public vehicle{
public:
 void speed(){
cout<<endl<<"in sppeed of twowheeler.";
}

void maintainance(){
cout<<endl<<"in maintainance of twowheeler.";
}

void value(){cout<<endl<<"In value of twowheeler.";}
};

class airborne :public vehicle{
public:
 void speed(){
cout<<endl<<"in sppeed of airborne.";
}
};


int main(){
vehicle *ptr;
vehicle v;
ptr=&v;
ptr->speed();
ptr->maintainance();
ptr->value();

vehicle *p,*q,*r;
fourwheeler f;
twowheeler t;
airborne A;
p=&f;
q=&t;
r=&A;

p->speed();
p->maintainance();

q->speed();
q->maintainance();

r->speed();
r->maintainance();

p->value();
cout<<endl;
q->value();
cout<<endl;
r->value();

vehicle w;
w.speed();

fourwheeler fk;
fk.speed();

airborne a;
a.maintainance();

return 0;

}
