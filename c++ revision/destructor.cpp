/*#include<iostream>
using namespace std;

class a{
private:
int data;
public:
a(){
data=5;
cout<<this<<endl;
}
~a(){
    cout<<"\ndest called "<<this;}
};

int main(){
a A,B,C,D;

}*/

#include <iostream>
using namespace std;

class name {
public:
  int data;
  name(int data) {
    this->data = data;
    cout<<this<<endl;
  }
  void printData() {
    cout << endl<<data << endl;
  }
  ~name(){
      cout<<"dest called\n"<<this;}
};

int main() {
  name* namePointer;
  {
    name n(5);
    namePointer = &n;
  }
  namePointer->printData();
}
