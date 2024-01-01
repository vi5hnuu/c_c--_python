#include<stdio.h>

void main(){
int i;
char ch;
for(int i=1;i<=5;i++){
scanf("%c",&ch);
printf("%c",ch);
ungetc(ch,stdin);
}
}
