#include<stdio.h>
#include<string.h>
#include<process.h>

void main(){
char str[10];
puts("Enter the string :");
gets(str);
int l=strlen(str);
for(int i=0;str[i]!=0;i++){
if(str[i]!=str[l-1-i]){
printf("not palindrome");
exit(0);
}
}
printf("palindrome");
}
