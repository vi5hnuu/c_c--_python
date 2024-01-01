#include<iostream>
#include<string.h>
using namespace std;

/*char *fun(){
return "vishnu";
}

int main(){
char *p=fun(); //p point to constant string and fun return constant string. //*p='V' is invalid
cout<<p;
}*/
///////////////////////
/*
char *fun(){
    char *p="vishnu"; //p is pointing to constant string //when it return it is passed and p in main point to this
    //it is deleted here but after assign to p in main
return p;
}

int main(){
char *p=fun(); //p point to constant string and fun return constant string. //*p='V' is invalid
cout<<p;
}*/
///////////////////////
/*char *fun(){
    char *p=new char[strlen("vishnu")];//on heap
    p="vishnu"; //p is not pointing to constant string
    return p;
}

int main(){
char *p=fun(); //p point to constant string and fun return variable string string. //*p='V' is invalid
//*p='V'; //variable string converted to const;
cout<<p;
}*/
/////////////////////
/*const char *fun(){
    const char *p=new char[strlen("vishnu")];//on heap
    p="vishnu"; //p is  pointing to constant string
    return p;
}

int main(){
const char *p=fun(); //p point to constant string and fun return const string string. //*p='V' is invalid
//*p='V';
cout<<p;
}*/

//////////////
char *fun(){
    char *p=new char[strlen("vishnu")+1];//on heap
    p="vishnu";
    return p;
}

int main(){
char *p=new char[strlen("vishnu")+1];
//p=fun(); by thi it point to new address insted of allocated one
strcpy(p,fun());
*p='V';
cout<<p;
}
