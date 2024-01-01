#include<stdio.h>

struct emp{
int len;
char name[1];
};

void main(){
char newname[]="vishnu";
struct emp *p=(struct emp*)malloc(sizeof(struct emp)-1+strlen(newname)+1+);
p->len=strlen(newname);
strcpy(p->name,newname);
printf("%d\t%s",p->len,p->name);
}
