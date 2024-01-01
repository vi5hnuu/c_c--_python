#include<stdio.h>
#include<string.h>

void main(){
char ch[]="vishnu";
//strupr(ch); //string only-->str+upr
//char chh='a';
//strupr(chh);//wrong
//toupper(chh);//this is for character only
//printf("%s",ch);
//printf("\n%s",toupper(ch));

/*char chhh[20];
//chhh=strupr(ch);//use strdup
strcpy(chhh,strupr(ch));//h is upper now
printf("%s",chhh);
*/

char *chh;//should be pointer as array is constamt pointer.
chh=strdup(ch);
printf("%s",chh);


}
