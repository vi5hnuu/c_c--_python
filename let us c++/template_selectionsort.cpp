#include<iostream>
using namespace std;

class Date{
private:
int day;
int mon;
int year;
public:
Date(int d=0,int m=0,int y=0){day=d;mon=m;year=y;}

int operator > (Date d){
if(year>d.year)
return 1;
if(year==d.year && mon>d.mon)
return 1;
if(year==d.year && mon==d.mon && day>d.day)
return 1;
return 0;
}
friend ostream& operator << (ostream &s,Date &d);
};

ostream& operator << (ostream &s,Date &d){
s<<d.day<<"/"<<d.mon<<"/"<<d.year;
}

template<class t>

void selectionsort(t a[],int sz){
t temp;
for(int i=0;i<sz-1;i++){
for(int j=i+1;j<sz;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}

int main(){
int arr[]={1,5,3,6,7,8,9,4,2,5};
Date d[]={{10,11,12},{12,15,22},{9,2,17},{8,5,19},{10,18,16},{10,11,14},{12,15,17},{9,14,17},{8,17,19},{10,13,16},};

selectionsort(arr,10);
for(int i=0;i<8;i++){
cout<<arr[i]<<"\n";
}

selectionsort(d,10);
for(int i=0;i<10;i++){
cout<<d[i]<<" ";
}
return 0;
}
