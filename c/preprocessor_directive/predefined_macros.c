#include<stdio.h>
#include<stddef.h>
/*
__DATE__
__LINE__
__TIME__
__FILE__
__STDC__
*/
void main(){
printf("DATE\t%s\n",__DATE__);
printf("TIME\t%s\n",__TIME__);
printf("FILE\t%s\n",__FILE__);
printf("LINE\t%d\n",__LINE__);
}
