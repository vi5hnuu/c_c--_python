#include<stdio.h>

void main(){
struct emp{
char name[20];
float sal;
};

struct emp e[10];
for(int i=0;i<10;i++){
printf("Enter name  and salery for %d person :",i+1);
scanf("%s %f",e[i].name,&e[i].sal);
}
}
