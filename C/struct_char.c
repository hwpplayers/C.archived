#include <stdio.h>

struct PERSON {
	char name[32];
	int no;
};

int main(void)
{
	struct PERSON per;

	printf("Adi soyadi:");
	gets(per.name);
	printf("No:");
	scanf("%d", &per.no);

	printf("%s, %d\n", per.name, per.no);

	return 0;
}
