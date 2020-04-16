#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char s[10];
	
	if ((f = fopen("Test.txt", "r+")) == NULL) {
		printf("can not open file");
		exit(EXIT_FAILURE);
	}	

	fseek(f, 10, SEEK_SET);

	fgets(s, 5, f);
	puts(s);

	fclose(f);

	return 0;
}
