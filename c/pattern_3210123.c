#include<stdio.h>

int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
for(int i=n;i>=-n;i--)
printf(" %d ",abs(i));
return 0;
}
