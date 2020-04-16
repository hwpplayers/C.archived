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

	fscanf(f, "%d%*s%d", &a, &b);	

	if (ferror(f)) { 
		printf("can not read file....!\n");
		exit(EXIT_FAILURE);
	}
	
	printf("a=%d\n", a);
	printf("b=%d\n", b);

	fclose(f);

	return 0;
}
