#include <stdio.h>

int main()
{
	FILE* f;
	char  r;
	char buffer;

	// read a file
	f = fopen("ungetc.txt", "r");
	FILE *g = fopen("ungetcc.txt", "w");

	// when no data
	if (f == NULL) {
		printf("Error in opening file");
		return (-1);
	}

	// read lines till end
	while (!feof(f)) {

		// get line
		r = fgetc(f);
		// replace ! with +
		if (r == '!') {
			ungetc('+', f);
		}
		// if not
		else {
			ungetc(r, f);
		}
		buffer=fgetc(f);
		fputc(buffer,stdout);
		fputc(buffer,g);
		fputc(buffer,f);//as file is in read mode
	}
	fclose(f);

	return 0;
}
