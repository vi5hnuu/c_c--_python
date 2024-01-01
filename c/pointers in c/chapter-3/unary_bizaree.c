#include<stdio.h>

void main(){
//printf("%d",++5); //error  //why
int j=++5;//why
printf("%d",j);
}


//let say const int a=5;..++a is error as a is const so here ++5 5 is const cant change it but int j=5; ++j can be change as j is variable
