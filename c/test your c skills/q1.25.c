#include<stdio.h>


struct book{
char name[20];
int noofpages;
float price;
};

int main(){
struct book b={0};
//printf("%d %f",b.noofpages,b.price);
printf("%s %d %f",b.name,b.noofpages,b.price);
return 0;
}


