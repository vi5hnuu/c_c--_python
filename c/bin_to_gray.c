#include<stdio.h>

void main(){
int bin[16][4],gray[16][4];
for(int i=0;i<16;i++){
int z=i;
for(int j=3;j>=0;j--){
bin[i][j]=z%2;
z=z/2;
}
gray[i][0]=bin[i][0];
}
//gray conversion

for(int i=0;i<16;i++){
for(int j=0;j<3;j++){
int z=bin[i][j]^bin[i][j+1];
gray[i][j+1]=z;
}
}

printf("binary\t\tgray\n");
for(int i=0;i<16;i++){
for(int j=0;j<4;j++)
printf("%d",bin[i][j]);
printf("\t\t");
for(int j=0;j<4;j++)
printf("%d",gray[i][j]);
printf("\n");
}

}
