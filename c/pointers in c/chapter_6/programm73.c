#include<stdio.h>


void main(){
int display();

int (*f)();
f=display;
(*f)();
}

int display(){
printf("\nWelcome");
}
