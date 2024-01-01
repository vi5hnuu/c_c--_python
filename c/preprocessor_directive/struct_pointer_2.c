#include<stdio.h>

struct book{
char *name;
char *author;
int *pages;
};

void main(){
char nme[10]="vishnu";
char athr[10]="kumar";
int pgs=55;
static struct book *b;
b->name=nme;
b->author=athr;
b->pages=&pgs;
printf("%s\t%s\t%d",b->name,b->author,*b->pages);
}
