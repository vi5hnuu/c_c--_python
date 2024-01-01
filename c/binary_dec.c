#include<stdio.h>
#include<windows.h>

int main(){
long int binary,decimal=0,x=20,y=1;
int i=0;
printf("Enter binary no :");
scanf("%ld",&binary);
while(binary!=0){
int z=binary%10;
if(z>1 || z<0){
    printf("\nInvalid binary digit.\n");
    break;
    }
binary=binary/10;
decimal=decimal+(int)(z*pow(2,i));
i++;
}
printf("%d",decimal);
}
