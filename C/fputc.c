#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char s[] = "this is a test, yes this is a test!";
	int i;
		
	if ((f = fopen("test.txt", "w")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; s[i] != '\0'; ++i)
		if (fputc(s[i], f) == EOF) {
			printf("cannot write file!..\n");
			exit(EXIT_FAILURE);
		}
			
	fclose(f);
	
	return 0;
}
