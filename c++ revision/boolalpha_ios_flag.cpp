#include<iostream>
#include<iomanip>
using namespace std;


/*int main(){
    cout.setf(ios::boolalpha);
    cout.unsetf(ios::skipws);
//cout<<setiosflags(ios::boolalpha)<<(5>2);
//cout<<endl<<(5>2);
cout<<(5>2)<<endl;
int a;
cin>>a;
cout<<a;
return 0;
}*/

int main(){
    //cout.setf(ios::left);
    cout.setf(ios::right);
  //cout<<hex<<15;
  //cout<<15;
cout<<setw(15)<<setfill('x')<<"vishnu";
char ch=cout.fill();
cout<<endl<<ch;
cout.fill('..');
cout<<setw(15)<<"vishnu";
return 0;
}
