#include<stdio.h>

int main(){
int n;
printf("Enter the number upto which you want perfect cube :");
scanf("%d",&n);

for(int i=1;i<=n;i++){
if(pow(i,3)<=n)
printf(" %d %d\n",i,(int)pow(i,3));
}

}
