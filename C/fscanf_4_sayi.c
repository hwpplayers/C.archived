#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int a, b, c, d;

	if ((f = fopen(file_name, "r")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	while (fscanf(f, "%d %d %d %d", &a, &b, &c, &d) != EOF)
		printf("%d\n", a + b + c + d);

	if (ferror(f)) { 
		printf("can not read file....!\n");
		exit(EXIT_FAILURE);
	}
	

	fclose(f);

	return 0;
}
