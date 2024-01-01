#include<stdio.h>


void main(){
struct a{
char *str;
struct a *p;
};
static struct a arr[]={
{"vishnu",arr+2},
{"krishan",arr},
{"laxmi",arr+1}
};

struct a *pp[3];
int i;
for(i=0;i<=2;i++)
pp[i]=arr[i].p;
printf("%s\n",pp[0]->str);
printf("%s\n",(*pp)->str);
printf("%s\n",(arr[2].str));
printf("%s\n",(**pp).str);

}
