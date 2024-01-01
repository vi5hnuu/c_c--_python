#include<iostream>
using namespace std;

class Distance{
private:
int feet;
float inches;
public:
    //Distance(){};
    Distance(int ft,float inc):feet(ft),inches(inc){};
void getdist(){
cout<<"\nEnter feet :";cin>>feet;
cout<<"\nEnter inches :";cin>>inches;
}
void showdist() const{
cout<<"feet :"<<feet<<" inches :"<<inches;
}
};

int main(){
Distance d1(10,2);
Distance d2; //no zero arg constructor defined
d1.showdist();
return 0;

}
