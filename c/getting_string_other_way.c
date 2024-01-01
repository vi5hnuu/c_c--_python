#include<stdio.h>

void main(){
char str[20];
int count=0;
for(int i=0;i<20;i++){
scanf("%1c",&str[i]);//wwrite like vishnu isted of single character.
if(str[i]=='m')
count++;
else if(str[i]=='\n')
    break;
}
printf("%d",count);
}
