#include<iostream>
using namespace std;

int main(){
char ch;
cout<<endl<<"\nEnter a character :";
cin.get(ch);
cout<<ch;
cin.putback(ch);
cin.get(ch);
cout<<endl<<ch;

int count=cin.gcount();
cout<<endl<<"character extracted is last get = "<<count<<endl;
cin.putback('z');
ch=cin.peek();
cout<<endl<<ch;
cin.get(ch);
cout<<endl<<ch<<endl;
return 0;
}
