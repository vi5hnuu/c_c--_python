#include<stdio.h>

void main(){
int bin[16][5],count=0;
for(int i=0;i<16;i++){
int z=i;
for(int j=3;j>=0;j--){
bin[i][j]=z%2;
if(bin[i][j]==1)
    count++;
z=z/2;
}
if(count%2==0)
    bin[i][4]=1;
else
    bin[i][4]=0;
count=0;
}

printf("binary correspondind to hex\t\t\tparity bit(odd)\n");
for(int i=0;i<16;i++){
for(int j=0;j<4;j++)
printf("%d",bin[i][j]);
printf("\t\t%d",bin[i][4]);
printf("\n");
}
}
