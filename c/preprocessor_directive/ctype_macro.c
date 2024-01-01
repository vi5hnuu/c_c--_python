#include<stdio.h>
#include<ctype.h>

void main(){
char a='a';
char b='_';
char c='A';
char d='a';
int e=5;
char f='\x55';
char g=' ';
char h=',';
char i='^d';
char j='65';
printf("\n %d",isalpha(a));
printf("\n %d",isalnum(b));
printf("\n %d",isupper(c));
printf("\n %d",islower(d));
printf("\n %d",isdigit(e));
printf("\n %d",isxdigit(f));
printf("\n %d",isspace(g));
printf("\n %d",ispunct(h));
printf("\n %d",iscntrl(i));
printf("\n %d",isascii(j));
}
