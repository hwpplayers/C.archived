#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *names;
	char name[64];
	int count;

	count = 1;
	names = (char *)malloc(1);
	if (names == NULL) {
		printf("cannot allocate memory!..\n");
		exit(EXIT_FAILURE);
	}
	*names = '\0';
	for (;;) {
		printf("Isim giriniz:");
		gets(name);
		if (!strcmp(name, "exit"))
			break;
		if (count != 1)
			strcat(names, ", ");
		count += strlen(name) + 2;
		names = (char *)realloc(names, count);
		if (names == NULL) {
			printf("cannot allocate memory!\n");
			exit(EXIT_FAILURE);
		}
		strcat(names, name);
	}

	puts(names);

	return 0;
}
