#include<iostream>
using namespace std;

class Index{
private:
int count;
public:
Index(){
count=0;
cout<<"\nIndex called.";
}
Index(int d){
count=d;
cout<<"\nIndex one arg called.";
}

~Index(){
cout<<"\nIndex destructor called.";
}

Index operator ++(){
++count;
return *this;
//return Index(count);
}

Index operator ++(int){
Index temp(count);
count++;
return temp;
}

void showdata() const{
cout<<count<<endl;
}
};

int main(){
Index c,d,e,f;
cout<<"c = ";
c.showdata();
d=++c;//why dest called here //see at bottom..
d=++c;//why dest called here
cout<<"c = ";
c.showdata();

cout<<"d = ";
d.showdata();

cout<<"e = ";
e.showdata();

f=e++;
cout<<"e = ";
e.showdata();
cout<<"f = ";
f.showdata();
return 0;
}

////////////////////

/*
#include<iostream>
using namespace std;

class Index{
private:
int count;
public:
Index(){
count=0;
cout<<"\nIndex called.";
}
Index(int d){
count=d;
cout<<"\nIndex one arg called.";
}

~Index(){
cout<<"\nIndex destructor called.";
}

Index& operator ++(){
++count;
return *this;
}

Index operator ++(int){
Index temp(count);
count++;
return temp;
}

void showdata() const{
cout<<count<<endl;
}
};

int main(){
Index c,d,e,f;
cout<<"c = ";
c.showdata();
d=++c;
d=++c;
cout<<"c = ";
c.showdata();

cout<<"d = ";
d.showdata();

cout<<"e = ";
e.showdata();

f=e++;
cout<<"e = ";
e.showdata();
cout<<"f = ";
f.showdata();
return 0;
}*/





///////////////understanding/////////////////
/*return *this;
when this is used the object is the object of which operatop is member function.
this obj is already exist so no constructor is called
but when we go out of operator function it deletes *this
and destructor is called


return Index(count);
when this is used a new object with value count is created and hence constructor is callled and when goes out of operator function
destructor is calld.*/
