#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>


struct record{
char player[20];
int age;
int runs;
};

void main(){
FILE *fp;
int i=0;
char choice='y';
struct record emp[15];
fp=fopen("recordss.dat","w");
if(!fp){
printf("cannot open the file.");
exit(0);
}

printf("Enter player name age and runs scored\n");
printf("======================================\n");

do{
scanf("%s %d %d",emp[i].player,&emp[i].age,&emp[i].runs);
fwrite(&emp,sizeof(emp),1,fp);
printf("\nEnter another(y/n): ");
i++;
choice=getche();
}while(choice!=tolower('n') && i<15);
fclose(fp);

if((fp=fopen("recordss.dat","r"))==NULL){
printf("Error openng file.");
exit(0);
}

for(int j=0;j<i;j++){
printf("\nRecords entered is \n");
fread(&emp,sizeof(emp),1,fp);
printf("%s %d %d",emp[j].player,emp[j].age,emp[j].runs);
sleep(3);
}
fclose(fp);
}
