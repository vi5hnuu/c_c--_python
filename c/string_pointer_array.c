#include<stdio.h>

void main(){
char *names[]={"vishnu","krishan","laxmi","pooja","parkash"};
char *temp;
for(int i=0;i<5;i++){
printf("\n%s",names[i]);
}
puts("\nExchanging 0th and 1st name:");
temp=names[0];
names[0]=names[1];
names[1]=temp;
printf("\n%s\t%s",names[0],names[1]);
//observe no need of strcpy etc..as address are exchanged.....
}
