#include <stdio.h>
#include <stdlib.h>

typedef struct tagPERSON {
	char name[32];
	int no;
} PERSON;

int main(void)
{
	FILE *f;
	PERSON per;

	if ((f = fopen("person.dat", "rb")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}
	
	while (fread(&per, sizeof(per), 1, f) > 0) 
		printf("%s, %d\n", per.name, per.no);

	if (ferror(f)) {
		printf("cannot read file!..\n");
		exit(EXIT_FAILURE);
	}
	
	fclose(f);

	return 0;
}
