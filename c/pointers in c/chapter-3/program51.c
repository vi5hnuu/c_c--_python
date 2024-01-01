#include<stdio.h>

struct book{
char name[25];
char author[25];
int callno;
};

void display(struct book*);

void main(){
struct book b1={"Let us c","YPK",101};
display(&b1);
}

void display(struct book *ptr){
printf("%s %s %d",ptr->name,ptr->author,ptr->callno);
}
