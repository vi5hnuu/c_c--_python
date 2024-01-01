#include<iostream>
#include<fstream>
#include<string>
#include<exception>
using namespace std;

int main(){
try{
/*ifstream infile("sample.cpp");
if(!infile)
throw runtime_error("File opening failed");
*/
string s1("vishnu kumar");
string s2("kri");
s1.append(s2,7,2);
cout<<s1<<endl;
}
catch(logic_error &e){
cout<<e.what();
}
catch(runtime_error &r){
cout<<r.what();
}
}
