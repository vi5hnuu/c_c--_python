#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void main(){
struct {
char name[20];
int age;
}stud[15];
FILE *fp;
int i=0,j=0,n;
char file[15];
printf("Enter the file name:");
scanf("%s",file);
fp=fopen(file,"wb");
if(!fp){
printf("cannot open file.");
exit(0);
}
else{
printf("How many records :");
scanf("%d",&n);
if(n<=15)
for(int i=0;i<n;i++){
    printf("Name :");
    scanf("%s",stud[i].name);
    printf("\nAge :");
    scanf("%d",&stud[i].age);
}
while(j<n){
    fwrite(&stud,sizeof(stud),1,fp);
    j++;
}
}

fclose(fp);

}
