#include<stdio.h>

void main(){
char str[]="peace";
char *s=str;
//printf("%s\n",s);
char *m;
printf("%s\n",m=s++ +3);//after printing  s points to e (m=ce) now s increment and next printf print eace as  s++ is only affect not +3
printf("%s\n",s);
//printf("%s\n",m);
//printf("%s\n",++s+3);
}
