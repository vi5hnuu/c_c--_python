#include<stdio.h>


/*void main(){
char *names[]={
"vishnu",
"krishan",
"laxmi",
"parkash",
"saroj",
"pooja",
"manisha"
};
char *temp;
printf("original :%s %s\n",names[2],names[3]);
temp=names[2];
names[2]=names[3];
names[3]=temp;
printf("original now :%s %s\n",names[2],names[3]);
}*/

void swap(char **,char **);
void main(){
char *names[]={
"vishnu",
"krishan",
"laxmi",
"parkash",
"saroj",
"pooja",
"manisha"
};
printf("original :%s %s\n",names[2],names[3]);
//swap(names+2,names+3);
swapp(names[2],names[3]);
printf("original now :%s %s\n",names[2],names[3]);
}

/*void swap(char **s1,char **s2){
char *temp;
temp=*s1;//s1-->names+2,s2=names+3
*s1=*s2;//names[2]=names[3].
*s2=temp;
}*/

void swapp(char *s1,char *s2){
char *temp;
temp=s1;
s1=s2;//s1-->neames[2],s2-->names[3] here only s1 and s2 points to alternate string but not changing the onginal masterlist
s2=temp;//s1-->names[3],s2--->names[2]
}
