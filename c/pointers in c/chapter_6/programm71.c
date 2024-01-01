#include<stdio.h>


/*void main(){
FILE *fp;
char ch;
int nol,noc=0;
printf("list :");
system("dir *.c/w");
fp=fopen("ex_q8.c","r");
while(1){
    ch=fgetc(fp);
    printf("%c",ch);
    if(ch=EOF);
    break;
    noc++;
     ch=fgetc(fp);
    printf("%c",ch);
    if(ch==EOF)
        break;
    noc++;
}
fclose(fp);
printf("\nNumber of characters %d",noc);
}*/

void main(){
FILE *fp;
char ch;
int nol,noc=0;
printf("list :");
system("dir *.c/w");
fp=fopen("ex_q8.c","r");
while(!feof(fp)){
    ch=fgetc(fp);
    printf("%c",ch);
    noc++;
     ch=fgetc(fp);
    printf("%c",ch);
    noc++;
}
fclose(fp);
printf("\nNumber of characters %d",noc);
}
