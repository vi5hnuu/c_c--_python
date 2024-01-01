#include<stdio.h>
#include<string.h>sz

int main(){
static char scan[40],cap[20],small[20],num[20],oth[20];
printf("Enter the mixed string :");
//scanf("%s",scan);
gets(scan);
int i=0,c=0,s=0,n=0,o=0;
while(scan[i]!='\0'){
if(scan[i]>=48 && scan[i]<=57)
num[n++]=scan[i];
else if(scan[i]>=65 && scan[i]<=90)
cap[c++]=scan[i];
else if(scan[i]>=97 && scan[i]<=122)
small[s++]=scan[i];
else
oth[o++]=scan[i];
i++;
}
printf("\nCAPITAL :");
for(int i=0;i<strlen(cap);i++)
printf("%c",cap[i]);
printf("\nSMALL :");
for(int i=0;i<strlen(small);i++)
printf("%c",small[i]);
printf("\nNUMBER :");
for(int i=0;i<strlen(num);i++)
printf("%c",num[i]);
printf("\nOTHER :");
for(int i=0;i<strlen(oth);i++)
printf("%c",oth[i]);
}
