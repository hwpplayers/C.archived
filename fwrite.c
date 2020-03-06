#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	if ((f = fopen("Sample.dat", "wb")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	if (fwrite(a, sizeof(int), 10, f) != 10) {
		printf("cannot write file!..\n");
		exit(EXIT_FAILURE);
	}
	
	fclose(f);

	return 0;
}
