#include <stdio.h>

struct PERSON {
	char name[32];
	int no;
};

void foo(struct PERSON *per)
{
	printf("%s, %d\n", per->name, per->no);
}

int main(void)
{
	struct PERSON x = { "Ali Serce", 234 };

	foo(&x);
		
	return 0;
}
