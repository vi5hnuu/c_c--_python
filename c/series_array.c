#include<stdio.h>

int main(){
int n,sum=0;
printf("Enter range of series :");
scanf("%d",&n);
//int sqr[n]={0};
int sqr[10]={0};
if(n<10)
for(int i=0;i<n;i++){
sqr[i]=(int)(pow((i+1),2));
printf("%3d",sqr[i]);
sum=sum+sqr[i];
}
printf("\nsum %d",sum);

}
