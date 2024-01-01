#include<stdio.h>

struct book{
char name[30];
char author[30];
int pages;
};

void main(){
struct book b1={"vishnu","kumar",55};
struct book *b;
b=&b1;
printf("%s\t%s\t%d",b->name,b->author,b->pages);
}
