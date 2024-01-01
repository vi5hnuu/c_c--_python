/*#include<iostream>
#include<string.h>
using namespace std;

class Date{
private:
char dt[9];
public:
Date(){dt[0]='\0';}
Date(char *s){strcpy(dt,s);}
void displaydata(){
cout<<dt<<endl;
}
};

class dmy{
private:
int day,mth,yr;
public:
dmy(){day=mth=yr=0;}
dmy(int d,int m,int y){day=d;mth=m;yr=y;}

operator Date(){
char temp[3],str[9];
itoa(day,str,10);
strcat(str,"/");
itoa(mth,temp,10);
strcat(str,temp);
strcat(str,"/");
itoa(yr,temp,10);
strcat(str,temp);
return Date(str);
}

void displaydata(){
cout<<day<<"/"<<mth<<"/"<<yr<<endl;
}
};

int main(){
Date d1;
dmy d2(17,11,94);
d1=d2;
cout<<"d1 = ";d1.displaydata();
cout<<"d2 = ";d2.displaydata();
return 0;
}*/

#include<iostream>
#include<string.h>
using namespace std;

class Date;
class dmy{
private:
int day,mth,yr;
public:
dmy(){day=mth=yr=0;}
dmy(int d,int m,int y){day=d;mth=m;yr=y;}

int aday(){return day;}
int amonth(){return mth;}
int ayear(){return yr;}

void displaydata(){
cout<<day<<"/"<<mth<<"/"<<yr<<endl;
}
};

class Date{
private:
char dt[9];
public:
Date(){dt[0]='\0';}
Date(char *s){strcpy(dt,s);}
Date(dmy &d){sprintf(dt,"%d%c%d%c%d",d.aday(),'/',d.amonth(),'/',d.ayear());}
void displaydata(){
cout<<dt<<endl;
}
};



int main(){
Date d1;
dmy d2(17,11,94);
d1=d2;
cout<<"d1 = ";d1.displaydata();
cout<<"d2 = ";d2.displaydata();
return 0;
}
