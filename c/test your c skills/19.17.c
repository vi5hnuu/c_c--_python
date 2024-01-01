#include<stdio.h>

int sort_name(const void *t1,const void *t2);
void main(){
char *names[]={"vishnu","krishan","laxmi","prakash","pooja","manisha"};
int i;
qsort(names,6,sizeof(char*),sort_name);
for(i=0;i<6;i++)
printf("\n%s",names[i]);
}

/*int sort_name(const void *t1,const void *t2){
char **t11,**t12;
t11=(char **)t1;
t12=(char **)t2;
return (strcmp(*t11,*t12));
}*/


int sort_name(const void *t1,const void *t2){
char *t11,*t12;
t11=(char *)t1;
t12=(char *)t2;
return (strcmp(t11,t12));
}

