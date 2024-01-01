#include<iostream>
#include<algorithm>
using namespace std;


int main(){
int source[]={11,22,33,44,55,66,77,88};
int pattern[2]={33,454};
int *ptr;
ptr=search(source,source+8,pattern,pattern+2);
if(ptr==source+8){
    cout<<"\nNo match found.";
    return 1;
}
cout<<"the pattern match at offset "<<ptr-source;
return 0;

}
