#include <stdio.h>

int main(void)
{
	char *names[] = { "ali", "veli", "selami", "siracettin", "ayse", "fatma", NULL };
	int i;
	
	for (i = 0; names[i] != NULL; ++i)
		printf("%s\n", names[i]);

	return 0;
}
