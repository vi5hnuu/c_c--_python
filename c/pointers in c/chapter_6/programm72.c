#include<stdio.h>

void display();

void main(){
printf("\nAddress of display function is %u",display);
//printf("\nAddress of display function is %u",display());
display();
}

void display(){
printf("\nLong live viruses.");
}
