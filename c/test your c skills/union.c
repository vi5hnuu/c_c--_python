#include<stdio.h>


void main(){
union a{
int i;
char ch[2];
};
//union a z1=512;
//union a z1={512};
/*union a z1={8,"hey"};
printf("%d %s",z1.i,z1.ch);*/

union a z1={8};
printf("%d",z1.ch[1]);

}

/*void main(){
struct e{
int a,b;
};

struct e f={5};
struct e a={6};
printf("%d %d",f.a,f.b);
printf("\n%d %d",a.a,a.b);
}*/
