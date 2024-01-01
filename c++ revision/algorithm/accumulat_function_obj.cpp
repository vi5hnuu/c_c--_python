#include<iostream>
#include<algorithm>
#include<numeric>
#include<list>
using namespace std;

class airtime{
private:
    int hours;
    int minutes;
    public:
        airtime():hours(0),minutes(0){}
        airtime(int h,int m):hours(h),minutes(m){}
        void get(){
        char dummy;
        cout<<"\nEnter airtime format (12:59) :";
        cin>>hours>>dummy>>minutes;
        }

        void display() const{
        cout<<hours<<':'<<minutes;
        }

        airtime operator +(const airtime &right) const{
        int temph=hours+right.hours;
        int tempm=minutes+right.minutes;
        if(tempm>=60){
            temph++;tempm-=60;
        }
        return airtime(temph,tempm);
        }

        bool operator == (const airtime &at2) const{
        return (hours==at2.hours) && (minutes==at2.minutes);
        }

        bool operator < (const airtime &at2) const{
        return (hours<at2.hours) || (hours==at2.hours && minutes<at2.minutes);
        }
        bool operator != (const airtime &at2) const{
        return !(*this==at2);
        }
        bool operator > (const airtime &at2) const{
        return !(*this<at2) && (*this==at2);
        }
};

int main(){
char ans;
airtime temp,sum;
list<airtime> airlist;
do{
    temp.get();
    airlist.push_back(temp);
    cout<<"\nEnter another (y/n):";
    cin>>ans;
}while(tolower(ans)=='y');

sum=accumulate(airlist.begin(),airlist.end(),airtime(0,0),plus<airtime>() );

cout<<"\nsum ";
sum.display();
cout<<endl;
return 0;
}
