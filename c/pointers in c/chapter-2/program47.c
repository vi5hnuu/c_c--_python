#include<stdio.h>

void main(){
char *name[5];
char str[20];
int i;

for(int i=0;i<5;i++){
printf("Enter thr string :");
gets(str);
name[i]=(char *)malloc(strlen(str));
strcpy(name[i],str);
}
for(int i=0;i<5;i++)
printf("%s\n",name[i]);
}
