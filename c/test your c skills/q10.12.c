#include<stdio.h>

struct emp{
int len;
char *name;
};

void main(){
char newname[]="vishnu";
struct emp *p=(struct emp*)malloc(sizeof(struct emp));
p->len=strlen(newname);
p->name=(char*)malloc(p->len+1);
strcpy(p->name,newname);
printf("%d\t%s",p->len,p->name);
free(p->name);
free(p);
}
