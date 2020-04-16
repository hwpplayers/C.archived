#include <stdio.h>

int main(void)
{
	char *names[5];
	int i;

	names[0] = "ali";
	names[1] = "veli";
	names[2] = "selami";
	names[3] = "ayse";
	names[4] = "fatma";

	for (i = 0; i < 5; ++i)
		printf("%s\n", names[i]);

	return 0;
}
