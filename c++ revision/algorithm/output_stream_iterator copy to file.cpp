#include<iostream>
#include<list>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
int arr[]={2,4,5,6,8,10};
list<int> thelist;

for(int i=0;i<5;i++)
thelist.push_back(arr[i]);

ofstream ofile;
ofile.open("iter.dat",ios::binary|ios::app);

ostream_iterator<int> ositer(ofile," ");
copy(thelist.begin(),thelist.end(),ositer);
return 0;
}
