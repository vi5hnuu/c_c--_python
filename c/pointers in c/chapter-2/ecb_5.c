#include<stdio.h>

void main(){
char a[2][2][25]={
{"jack and jill",
"went up the hill"},
{"jack fell down",
"and breaks his crown"}
};

printf("%c %c %c %c\n",a[0][0][9],a[0][1][2],a[1][0][0],a[1][1][4]);
printf("%s %s %s %s\n",&a[0][0][9],&a[0][1][2],&a[1][0][0],&a[1][1][4]);
}
