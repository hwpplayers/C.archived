#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int val, i;

	if ((f = fopen(file_name, "wb")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 4; ++i)
		fwrite(&i, sizeof(int), 1, f);	
	
	fclose(f);

	if ((f = fopen(file_name, "rb")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	while (fread(&val, sizeof(int), 1, f) > 0)
		printf("%d\n", val);

	fclose(f);


	return 0;
}
