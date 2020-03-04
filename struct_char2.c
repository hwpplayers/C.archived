#include <stdio.h>

struct PERSON {
	char name[32];
	int no;
};

int main(void)
{
	struct PERSON per = { "Kaan Aslan", 123 };
	char ch;

	ch = per.name[3];
	putchar(ch);

	return 0;
}
