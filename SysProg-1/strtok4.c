#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE		1024

int main(void)
{
	FILE *f;
	char line[MAX_LINE];
	char *str;

	if ((f = fopen("test.txt", "r")) == NULL) {
		fprintf(stderr, "cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(line, MAX_LINE, f) != NULL) {
		for (str = strtok(line, "\t\n"); str != NULL; str = strtok(NULL, "\t\n"))
			puts(str);
		printf("---------------\n");
	}

	fclose(f);

	return 0;
}
