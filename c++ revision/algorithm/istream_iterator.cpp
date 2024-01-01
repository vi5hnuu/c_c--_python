#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
list<float> flist(5);

cout<<"\nEnter five floating numbers :";
istream_iterator<float> cin_itr(cin);
istream_iterator<float> end_of_stream;
copy(cin_itr,end_of_stream,flist.begin());
cout<<endl;
ostream_iterator<float> ositer(cout,"--");
copy(flist.begin(),flist.end(),ositer);
return 0;
}
