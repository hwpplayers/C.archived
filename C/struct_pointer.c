#include <stdio.h>

struct PERSON {
	char *name;
	int no;
};

int main(void)
{
	struct PERSON per;
	
	per.name = "Kaan Aslan";
	per.no = 123;

	printf("%s, %d\n", per.name, per.no);
	
	return 0;
}
