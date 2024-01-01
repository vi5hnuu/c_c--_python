#include<stdio.h>

int main()
{
FILE *fs, *ft, *fp;
fp = fopen("A.C", "r");
fs = fopen("B.C", "r");
ft = fopen("C.C", "r");
//fclose(fp, fs, ft);
fclose(fp);
    return 0;
}
