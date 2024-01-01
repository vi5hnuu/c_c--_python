#include<stdio.h>
/*
void main(){
char city[5][10];
for(int i=0;i<5;i++){
scanf("%s",city[i]);
}

printf("\nSorted names of city are :");
for(int i=65;i<=90;i++)
for(int j=0;j<=5;j++){
if(city[j][0]==i)
printf("%s\n",city[j]);
}
}*/
/*
void main(){
char city[5][10];
for(int i=0;i<5;i++){
scanf("%s",city[i]);
}
printf("\nSorted names of city are :");
for(int i=65;i<=90;i++)
for(int j=0;j<=5;j++){
if(toupper(city[j][0])==i)
printf("%s\n",city[j]);
}
}
*/

//all the above programm match only signle character and hance ther is chance of wrong order(they print base on first character)
void main(){
char city[5][10];
for(int i=0;i<5;i++){
scanf("%s",city[i]);
}
printf("\nSorted names of city are :");
for(int i=0;i<4;i++)
for(int j=i+1;j<5;j++){
if(strcmp(city[i],city[j])>0){
    char temp[10];
    strcpy(temp,city[i]);
    strcpy(city[i],city[j]);
    strcpy(city[j],temp);
}
}
for(int j=0;j<5;j++)
printf("\n%s",city[j]);

}
