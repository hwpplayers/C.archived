#include <stdio.h>

void disp_names(char **ppnames);

int main(void)
{
	char *names[] = { "ali", "veli", "selami", "ayse", "fatma", NULL };

	disp_names(names);
	
	return 0;
}

void disp_names(char **ppnames)
{
	int i;

	for (i = 0; ppnames[i] != NULL; ++i) 
		printf("%s\n", ppnames[i]);
}
