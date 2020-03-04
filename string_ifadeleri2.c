#include <stdio.h>

static char compiler_generated_name[] = "ankara";

int main(void)
{
	char *str;

	str = compiler_generated_name;
	printf("%s\n", str);

	return 0;
}
