#include <stdio.h>

struct PERSON {
	char name[32];
	int no;
};

typedef struct PERSON PER;

int main(void)
{
	PER per = { "Ali Serce", 123 };

	printf("%s, %d\n", per.name, per.no);

	return 0;
}
