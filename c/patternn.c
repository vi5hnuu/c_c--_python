#include<stdio.h>

int main(){
    int j;
for(int i=1;i<=5;i++){
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
for(int i=1;i<=5;i++){
for(int m=j-i;m>=1;m--)
printf("%d",m);
printf("\n");
}

}
