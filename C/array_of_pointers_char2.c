#include <stdio.h>

int main(void)
{
	char *names[5] = { "ali", "veli", "selami", "ayse", "fatma" };
	int i;
	
	for (i = 0; i < 5; ++i)
		printf("%s\n", names[i]);

	return 0;
}
