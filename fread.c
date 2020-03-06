#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	int a[10];
	int i;

	if ((f = fopen("Sample.dat", "rb")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	if (fread(a, sizeof(int), 10, f) != 10) {
		printf("cannot read file!..\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 10; ++i)
		printf("%d ", a[i]);
	printf("\n");
	
	fclose(f);

	return 0;
}
