#include<stdio.h>

void main(){
static char *s[]={"black","white","pink","violet"};
printf("%s",s[0]);
printf("\n%c",s[0][0]);
char **ptr[]={s+3,s+2,s+1,s},***p;
p=ptr;
++p;//*(s+2)==pink(stores addres of p)==>+1=address of i==>ink with %s
printf("%s",**p+1);
}
