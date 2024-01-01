/*#include<iostream>
using namespace std;

class sample{
private:
int i;
float a;
public:
sample(){i=0;a=0.0;cout<<"\nzeero arg ctor.\n";}
sample(int x,float y){i=x;a=y;cout<<"\ntwo arg ctor.\n";}
void showdata(){
cout<<i<<a;
}
~sample(){
cout<<"\ndtor\n";
}
};

int main(){
sample s1;
//delete is used with dynamic memory
sample *s2=new sample();
delete s2;//dtor called
sample *s3=new sample(12,12.5);//memory leak
sample *s4=new sample;//memory leak
//dtor will be called only for s1(and s2 as delete is used)
}*/

/*#include<iostream>
using namespace std;

class sample{
private:
int i;
float a;
public:
sample(){i=0;a=0.0;cout<<"\nzeero arg ctor.\n";}
sample(int x,float y){i=x;a=y;cout<<"\ntwo arg ctor.\n";}
void showdata(){
cout<<i<<a;
}
~sample(){
cout<<"\ndtor\n";
}
};

int main(){
sample s1;
//delete is used with dynamic memory
sample *s2=new sample();
delete s2;//dtor called
sample *s3=new sample(12,12.5);
sample *s4=new sample;
delete s3;//delete s3,s4; dont use this..check it out...
delete s4;
return 0;
}*/

#include<iostream>
using namespace std;

class sample{
private:
int i;
int *p;
float a;
public:
sample(){i=0;a=0.0;cout<<"\nzeero arg ctor.\n";
p=new int;
*p=5;
}
sample(int x,float y){i=x;a=y;cout<<"\ntwo arg ctor.\n";
p=new int(x);
}
void showdata(){
cout<<i<<a;
}
~sample(){
cout<<"\ndtor\n";
delete p;
}
};

int main(){
sample s1; //destructor invoked at end and will delete this obj with pointer p to int in obj
sample *s2=new sample();

sample *s3=new sample(12,12.5);
sample *s4=new sample;
delete s3;
delete s4;
delete s2;
}
