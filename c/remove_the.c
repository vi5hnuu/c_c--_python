#include<stdio.h>
#include<string.h>

/*void main(){
char line[80]={0},line2[80];
gets(line);
int l=strlen(line);
int i=0,k=0;
for( i=0;i<l;i++){
if((line[i]=='t' && line[i+1]=='h' && line[i+2]=='e')||(line[i]=='T' && line[i+1]=='H' && line[i+2]=='E')){
i+=2;
continue;
}
else
line2[k++]=line[i];
}
line2[k]='\0';
printf("\n%s",line2);

}*/

void main(){
char line[80]={0},line2[80];
gets(line);
int l=strlen(line);
int i=0,k=0;
for( i=0;i<l;i++){
if((tolower(line[i])=='t' && tolower(line[i+1])=='h' && tolower(line[i+2])=='e')){
i+=2;
continue;
}
else
line2[k++]=line[i];
}
line2[k]='\0';
printf("\n%s",line2);

}
