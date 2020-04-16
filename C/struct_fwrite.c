#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagPERSON {
	char name[32];
	int no;
} PERSON;

int main(void)
{
	FILE *f;
	PERSON per;

	if ((f = fopen("person.dat", "wb")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}

	for (;;) {
		printf("Adi soyadi:");
		gets(per.name);
		if (!strcmp(per.name, "exit"))
			break;
		printf("No:");
		scanf("%d", &per.no); 
		getchar();		/* tamponu boşaltmak için, şimdilik takılmayın */
		if (fwrite(&per, sizeof(per), 1, f) != 1) {
			printf("cannot write file!..\n");
			exit(EXIT_FAILURE);
		}
	}
	
	fclose(f);

	return 0;
}
