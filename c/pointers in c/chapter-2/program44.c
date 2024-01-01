#include<stdio.h>

#define FOUND 1
#define NOTFOUND 0

/*void main(){
char masterlist[6][10]={
"vishnu",
"krishan",
"laxmi",
"parkash",
"saroj",
"pooja",
"manisha"
};

int flag,a;
char yourname[10];
printf("\nEnter your name :");
scanf("%s",yourname);

flag=NOTFOUND;
for(int i=0;i<6;i++){
a=strcmp(masterlist[i],yourname);
if(a==0){
printf("You are welcome.");
flag=FOUND;
break;
}
}
if(!flag)
printf("\nSorry,your are a trespasser");
}*/

void main(){
char masterlist[6][10]={
"vishnu",
"krishan",
"laxmi",
"parkash",
"saroj",
"pooja",
"manisha"
};

int flag,a;
char yourname[10];
printf("\nEnter your name :");
scanf("%s",yourname);

flag=NOTFOUND;
for(int i=0;i<6;i++){
a=strcmp(&masterlist[i][0],yourname);
if(a==0){
printf("You are welcome.");
flag=FOUND;
break;
}
}
if(!flag)
printf("\nSorry,your are a trespasser");
}
