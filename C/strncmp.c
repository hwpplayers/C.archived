#include <stdio.h>
#include <string.h>

int main(void)
{
	char passwd[] = "maviay";
	char s[64];

	printf("Enter password:");
	gets(s);

	if (!strncmp(passwd, s, strlen(s)))
		printf("Ok\n");
	else
		printf("invalid password\n");

	return 0;
}
