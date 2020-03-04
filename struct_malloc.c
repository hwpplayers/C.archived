#include <stdio.h>
#include <stdlib.h>

struct PERSON {
	char name[32];
	int no;
};

int main(void)
{
	struct PERSON *per;

	per = (struct PERSON *)malloc(sizeof(struct PERSON));
	if (per == NULL) {
		printf("cannot allocate memory!..\n");
		exit(EXIT_FAILURE);
	}
	printf("Adi soyadi:");
	gets(per->name);
	printf("No:");
	scanf("%d", &per->no);

	printf("%s, %d\n", per->name, per->no);

	free(per);

	return 0;
}
