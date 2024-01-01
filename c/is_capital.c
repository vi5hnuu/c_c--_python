#include<stdio.h>

int main(){
printf("Enter the character :");
char ch;
int z;
scanf("%c",&ch);
z=ch>=65 && ch<=90 ? 1 : 0;
printf("%d",z);
return 0;
}
