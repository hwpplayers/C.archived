#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	int i;
	int ch;


	if ((f = fopen("test.txt", "rb")) == NULL) {
		printf("can not open file");
		exit(EXIT_FAILURE);
	}


	while ((ch = fgetc(f)) != EOF)
		printf("%d\n", ch);	

	fclose(f);

	return 0;
}
