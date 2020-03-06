#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char passwd[128];
	unsigned seed;
	int i;
	int ch;

	printf("Enter password:");
	gets(passwd);
	seed = 0;
	for (i = 0; passwd[i] != '\0'; ++i)
		seed = seed * 31 + passwd[i];

	if ((f = fopen("test.txt", "r+")) == NULL) {
		fprintf(stderr, "cannot open file!..\n");
		exit(EXIT_FAILURE);
	}
	srand(seed);

	while ((ch = fgetc(f)) != EOF) {
		ch ^= rand() % 256;
		fseek(f, -1, SEEK_CUR);
		fputc(ch, f);
		fseek(f, 0, SEEK_CUR);
	}

	fclose(f);

	return 0;
}
