#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int a, b;

	if ((f = fopen(file_name, "r")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	fscanf(f, "%d %d", &a,  &b);	

	printf("a=%d\nb=%d\n", a, b);

	fclose(f);

	return 0;
}
