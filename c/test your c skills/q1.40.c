#include<stdio.h>

void main(){
union a{
short int i;
char ch[2];
};
union a u;
u.ch[0]=2;
u.ch[1]=3;
printf("%d\t%d\t%d",u.ch[0],u.ch[1],u.i);
}
