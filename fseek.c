#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	
	if ((f = fopen("Test.txt", "r+")) == NULL) {
		printf("can not open file");
		exit(EXIT_FAILURE);
	}	

	fseek(f, 0, SEEK_END);

	fprintf(f, "Yes, this is a test");

	fclose(f);

	return 0;
}
