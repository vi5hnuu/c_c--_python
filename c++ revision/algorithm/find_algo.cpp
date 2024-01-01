#include<iostream>
#include<algorithm>
using namespace std;


int main(){
int arr[]={11,22,33,44,55,66,77,88};
int *ptr;
ptr=find(arr,arr+8,33);
cout<<"the number is found at offset "<<ptr-arr;
return 0;

}
