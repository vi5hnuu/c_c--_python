//sorting
/*#include<stdio.h>
//1. time consuming.
void main(){
int num[50],sum=0;
printf("Enter elements :");
for(int i=0;i<50;i++)
scanf("%1d",&num[i]);//1d means we can wwwrite 124687546796784 in line and each vale is assigned seperately
printf("\n");
for(int i=0;i<50;i++){
printf(" %d",num[i]);
sum=sum+num[i];
}
printf("\n\tsorted\n");
for(int i=0;i<sum/2;i++){
for(int j=0;j<50;j++)
if(i==num[j])
printf("%d ",num[j]);
}

}*/

/////////////////////
//2. time consuming.
#include<stdio.h>
void main(){
int num[50];
printf("Enter elements :");
for(int i=0;i<50;i++)
scanf("%1d",&num[i]);
printf("\n");
for(int i=0;i<50;i++){
printf(" %d",num[i]);
}
printf("\n\tsorted\n");
for(int i=0;i<49;i++){
for(int j=i+1;j<50;j++){
if(num[i]>num[j]){
int temp=num[i];
num[i]=num[j];
num[j]=temp;}
}
}
for(int i=0;i<50;i++)
    printf("%d",num[i]);
}
