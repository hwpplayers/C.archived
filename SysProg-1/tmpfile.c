#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	int i, val;

	if ((f = tmpfile()) == NULL) {
		fprintf(stderr, "cannot create temporary file!..\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 100; ++i) 
		if (fwrite(&i, sizeof(int), 1, f) != 1) {
			fprintf(stderr, "cannot write file!..\n");
			exit(EXIT_FAILURE);
		}

	fseek(f, 0, SEEK_SET);

	while (fread(&val, sizeof(int), 1, f) == 1) 
		printf("%d ", val);
	
	if (ferror(f)) {
		fprintf(stderr, "cannot read file!...\n");
		exit(EXIT_FAILURE);
	}
	printf("\n");

	fclose(f);

	return 0;
}
