#include<stdio.h>

struct book{
char name[25];
char author[25];
int callno;
};

void main(){
struct book b1={"Let us c","YPK",101};
struct book *ptr;
ptr=&b1;
printf("%s %s %d",ptr->name,ptr->author,ptr->callno);
}
