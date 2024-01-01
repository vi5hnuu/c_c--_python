#include<iostream>
using namespace std;

class gamma{
private:
static int total;
int id;
public:
gamma(){
total++;
id=total;
}
~gamma(){
total--;
cout<<"\nDestroying Id number "<<id<<endl;
}

static void showtotal(){
cout<<"Total is "<<total<<endl;
}

void showid(){
cout<<"Id number is "<<id<<endl;
cout<<total;
}
};
int gamma::total=0;

int main(){
gamma g1;
gamma::showtotal();
g1.showtotal();
g1.showid();
return 0;
}
