#include<stdio.h>

int main(){
for(int i=0;i<=8;i++){
        int z=i,count=0;
for(int j=3;j>=1;j--){
int digit=z%2;
z=z/2;
if(digit==1)
    count++;
printf("%.*d\r",j,digit);
}
printf("\n");
if(count%2==0)
    printf("\b\bparity %d\n",1);
else
    printf("\b\bparity %d\n",0);

}
}

//or check octal_binary_1.c
