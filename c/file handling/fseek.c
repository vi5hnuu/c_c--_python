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
int num;
printf("\nEnter the record no. to see the record :");
scanf("%d",&num);
fseek(fp,sizeof(emp)*(num-1),0);
printf("position in file is %d\n",ftell(fp));
printf("\nRecord is \n"); //no idea
struct record em;
fread(&em,sizeof(em),1,fp);
printf("%s %d %d",em.player,em.age,em.runs);
sleep(3);
fclose(fp);
}

