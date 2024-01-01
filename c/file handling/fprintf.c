#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>

/*void main(){
FILE *fp;
char text[30];
fp=fopen("text.txt","w");
printf("Enter the text :");
gets(text);
fprintf(fp,"%s",text);
fclose(fp);
printf("\nContent read\n");
fp=fopen("text.txt","r");
while(!feof(fp)){
char c=getc(fp);
printf("%c",c);
fclose(fp);
}
}*/

void main(){
FILE *fp;
char text[30];
fp=fopen("text.txt","w");
printf("Enter the text :");
gets(text);//vishnu kumar
fprintf(fp,"%s",text);
fclose(fp);
printf("\nContent read\n");
fp=fopen("text.txt","r");
strcpy(text," ");
fscanf(fp,"%s",text);
printf("%s",text);
}
