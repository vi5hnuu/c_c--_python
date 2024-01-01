/*#include<iostream>
using namespace std;

class Distance{
private:
int feet;
float inches;
public:
class inchesEx{};
Distance(){feet=0;inches=0.0;}
Distance(int ft,float inc){
if(inc>=12.0)
throw inchesEx();
feet=ft;
inches=inc;
}
void getdist(){
cout<<"\nEnter feet :";cin>>feet;
cout<<"\nEnter inches :";cin>>inches;
if(inches>=12.0)
throw inchesEx();
}
void showdist(){
cout<<feet<<"-"<<inches;
}
};

int main(){
try{
Distance dist1(17,3.5);
Distance dist2;
dist2.getdist();
cout<<"\nDist1 =";dist1.showdist();
cout<<"\nDist2 =";dist2.showdist();
}
catch(Distance::inchesEx){
cout<<"\nInitilization error :inches value tooo large.";
}
//cout<<endl<<"try again";
return 0;
}*/

/////modified version/////////////
/*#include<iostream>
#include<string>
using namespace std;

class Distance{
private:
int feet;
float inches;
public:
    ////////////////////////
class inchesEx{
public:
    string origin;
    float value;
    inchesEx(string a,float in){
    origin=a;
    value=in;
    }
};
    ////////////////////////
Distance(){feet=0;inches=0.0;}
Distance(int ft,float inc){
if(inc>=12.0)
throw inchesEx("In one-arg constructor :Error value of inches ",inc);
feet=ft;
inches=inc;
}
void getdist(){
cout<<"\nEnter feet :";cin>>feet;
cout<<"\nEnter inches :";cin>>inches;
if(inches>=12.0)
throw inchesEx("In getdist function :Error value of inches ",inches);
}
void showdist(){
cout<<feet<<"-"<<inches;
}
};

int main(){
try{
Distance dist1(17,13.5);
Distance dist2;
dist2.getdist();
cout<<"\nDist1 =";dist1.showdist();
cout<<"\nDist2 =";dist2.showdist();
}
catch(Distance::inchesEx ix){
cout<<ix.origin;
}
//cout<<endl<<"try again";
return 0;
}*/

///////////////////////////////////
/////////////////////////////////
/////////////////////////////////

#include<iostream>
#include<string>
using namespace std;

class Distance{
private:
int feet;
float inches;
public:
    ~Distance(){
    cout<<"dest called";
    }
    ////////////////////////
class inchesEx{
private:
    string origin;
    float value;
    public:
    inchesEx(string a,float in){
    origin=a;
    value=in;
    }
    void showerror(){
    cout<<origin<<value;
    }
};
    ////////////////////////
Distance(){feet=0;inches=0.0;}
Distance(int ft,float inc){
if(inc>=12.0)
throw inchesEx("In one-arg constructor :Error value of inches ",inc);
feet=ft;
inches=inc;
}
void getdist(){
cout<<"\nEnter feet :";cin>>feet;
cout<<"\nEnter inches :";cin>>inches;
if(inches>=12.0)
throw inchesEx("In getdist function :Error value of inches ",inches);
}
void showdist(){
cout<<feet<<"-"<<inches;
}
};

int main(){
try{
Distance dist1(17,13.5);
Distance dist2;
dist2.getdist();
cout<<"\nDist1 =";dist1.showdist();
cout<<"\nDist2 =";dist2.showdist();
}
catch(Distance::inchesEx ix){
ix.showerror();
}
//cout<<endl<<"try again";
return 0;
}

//or overload << >> .
