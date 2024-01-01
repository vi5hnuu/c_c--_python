#include<iostream>
using namespace std;

class counter{
private:
unsigned int count;
public:
    //counter():count(0)
    //counter():count{0}
    //counter():count=0
    {};
    void disp(){
    cout<<count;
    }
};

int main(){
counter c;
c.disp();
return 0;
}
