#include <stdio.h>

/*int main()
{
	char  r;
	FILE *g = fopen("new.txt", "w");

	// read lines till end
	while (r!='\n') {
            scanf("%c",&r);
        fputc(r,g);
		}
	fclose(g);
g = fopen("new.txt", "r");
while(!feof(g)){
    r=fgetc(g);
    printf("%c",r);
}
	return 0;
}*/

int main()
{
	char  r;
	FILE *g = fopen("new.txt", "r");
	FILE *h = fopen("neww.txt", "w");

	// read lines till end
while(!feof(g)){
    r=fgetc(g);
        printf("%c",r);
    if(r>=65 && r<=90)
        r=r+32;//no idea

        fputc(r+32,h);
}
	return 0;
}
