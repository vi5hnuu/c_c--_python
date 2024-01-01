#include<stdio.h>


void main(){
char *name[6];
int i;
/*for(int i=0;i<6;i++)
scanf("%s",name[i]);
run time error
*/
/*
run time error
char *p;
scanf("%s",p);
*/
//explanation page 171


char *p;
char a[]="vishnu";
strcpy(p,a);
printf("%s",p);//why it didnt work see explaination page 171.
//see program 47.
}
