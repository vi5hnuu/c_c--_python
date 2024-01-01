#include<stdio.h>

void main(){
/*
//char a[]="vishnu kumar";
//char b[12]="vishnu kumar";//wrong
//char c[13]="vishnu kumar";
//char d[13]="vishnu\0 kumar";
char e[13]="vishnu0 kumar";
//printf("%s\n%s\n%s\n%s\n%s",a,b,c,d,e);
printf("%s",e);
*/

char a[]={'v','i','s','h','n','u'};
char b[]={'v','i','s','h','n','u','\0'};
char c[]={'v','i','s','\0','h','n','u'};
char d[6]={'v','i','s','h','n','u'};
char e[7]={'v','i','s','h','n','u'};
char f[]={'v','i','s',0,'h','n','u'};
char g[7]={'v','i','s','h','n','u','\0'};
printf("%s\n%s\n%s\n%s\n%s\n%s\n%s",a,b,c,d,e,f,g);


}
