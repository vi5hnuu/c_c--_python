#include<stdio.h>

int main(){
int n,even=0,odd=0;
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("%d",i);
odd=odd+i;
if(++i<=n){
        even=even+i;
printf("\t%d\n",i);}
}
printf("\nodd %d\teven %d",odd,even);
return 0;
}
