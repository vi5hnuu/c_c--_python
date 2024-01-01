#include<stdio.h>

void main(int argc,char *argv[]){
//printf("%s\n",++argv[1]);
//printf("%c\n",*++argv[1]); //it gives character only at that address not address
printf("%c",++argv[1]);//++argv[1] gives address of r (0 to 255) and %c print character to that value
}
