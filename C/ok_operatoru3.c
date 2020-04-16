#include <stdio.h>

struct PERSON {
	char name[32];
	int no;
};

int main(void)
{
	struct PERSON per = { "Ali Serce", 234 };
	struct PERSON *pper;

	pper = &per;
	
	printf("%s, %d\n", pper->name, pper->no);

	printf("%c\n", pper->name[2]);

	return 0;
}
