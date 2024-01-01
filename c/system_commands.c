#include<stdio.h>
#include<dos.h>

int main(){
int c;
printf("\nFile listing menu");
printf("\n1. .EXE");
printf("\n2. .BAT");
printf("\n3. .OBJ");
printf("\n4. type txt");
printf("\n5 .BAK\nEnter your choice :");
scanf("%d",&c);
switch(c){
case 1:system("dir .exe"); break;
case 2:system("dir .bat"); break;
case 3:system("dir .c"); break;
case 4:system("vishnu.txt"); break;
case 5:system("dir .bak"); break;
default:printf("Invalid choice");
}
}
