#include<stdio.h>

int main(){
char ch[]="vishnu";
int z=5500;
float f=1225.25;
printf("%s %z %f\n",ch,z,f);
printf("%10s\n",ch);
printf("%5s\n",ch);
printf("%-10.5s\n",ch);
printf("%+10.5s\n",ch);
printf("%5.5s\n",ch);
printf("%2.5s\n",ch);
printf("%*.*s\n",5,5,ch);
printf("%-*.*s\n",5,5,ch);
printf("%-*.*s\n",20,6,ch);
printf("%+*.*s\n",20,6,ch);
printf("==================\n");
printf("%d\n",z);
printf("%10d\n",z);
printf("%2d\n",z);
printf("%10.5d\n",z);
printf("%10.1d\n",z);
printf("%+10.5d\n",z);
printf("%-10.5d\n",z);
printf("%2.5d\n",z);
printf("%*.*d\n",10,5,z);
printf("%-.5d\n",z);
printf("%+.5d\n",z);
printf("==================\n");
printf("%f\n",f);
printf("%10f\n",f);
printf("%+10f\n",f);
printf("%-10f\n",f);
printf("%10.5f\n",f);
printf("%5.5f\n",f);
printf("%+5.5f\n",f);
printf("%-5.5f\n",f);
printf("%5.1f\n",f);
printf("%*.*f\n",5,2,f);
printf("%*f\n",5,f);
}
