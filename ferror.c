#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	int ch;
		
	if ((f = fopen("Sample.c", "r")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(f)) != EOF)
		putchar(ch);

	if (ferror(f)) {
		printf("cannot read file!..\n");
		exit(EXIT_FAILURE);
	}
	
	fclose(f);
	
	return 0;
}
