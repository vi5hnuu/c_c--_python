#include<stdio.h>

int main(){
int n;
static int arr[10];
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
int z=i;
while(z!=0){
int digit=z%10;
z=z/10;
arr[digit]++;
}
}
for(int i=0;i<10;i++)
    printf("no of %d is %d\n",i,arr[i]);
}
