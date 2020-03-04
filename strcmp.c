#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[64];
	char passwd[] = "maviay";

	printf("Enter password:");
	gets(s);

	if (!strcmp(s, passwd))
		printf("Ok\n");
	else
		printf("Invalid password\n");

	return 0;
}
