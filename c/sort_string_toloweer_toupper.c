#include<stdio.h>
#include<string.h>

void main(){
char ch[]="vishnuKUMAR VISHNU";
for(int i=65;i<=90;i++)
for(int j=0;j<strlen(ch);j++)
/*if(ch[j]==toupper(i) ||ch[j]==tolower(i))//toupper(65)==A tolower(65)==a
printf("%c",ch[j]);*///AhHiIKMnNRsSuUUvV

if(ch[j]==i || ch[j]==(i+32))//AhHiIKMnNRsSuUUvV
printf("%c",ch[j]);

/*if(toupper(ch[j])==i)//AhHiIKMnNRsSuUUvV
printf("%c",ch[j]);*/
}
