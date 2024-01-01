#include<stdio.h>
#include<ctype.h>

int main(){
int c=1;
char i,ch;
printf("Enter the character :");
scanf("%c",&ch);
ch=tolower(ch);
for(i=97;i<=122;(i++,c++))
if(ch==i)
printf("%c %d",i,c);
}
