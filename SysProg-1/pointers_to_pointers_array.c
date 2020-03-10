#include <stdio.h>

int main(void)
{
	char *names[] = { "ali", "veli", "selami" };
	char **ppc;

	ppc = names;
	puts(*ppc);
	++ppc;
	puts(*ppc);
	++ppc;
	puts(*ppc);

	return 0;
}
