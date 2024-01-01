#include<stdio.h>


void main(){
char **p={"orange","apple"};
char *q[]={"orange","apple"};
char r[][6]={"orange","apple","grapes"};
//printf("%s\n",p);
//printf("%c\n",p[0]);
//printf("%c\n",p[0]);//error
//printf("%s\n",q[0]);
printf("%s\n",r[1]);
}
