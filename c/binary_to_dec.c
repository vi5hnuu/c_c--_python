#include<stdio.h>
#include<string.h>

int main(){
char c[10];
gets(c);
int dec=0,t=0;
for(int i=strlen(c)-1;i>=0;i--)
    dec=dec+(int)((c[i]-'0')*pow(2,t++));
printf("%d",dec);
}
