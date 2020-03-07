#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *mystrtok(const char *str, const char *delim)
{
	static char *pos;
	char *beg, *dynstr;

	if (str != NULL)
		pos = str;

	while (*pos != '\0' && strchr(delim, *pos) != NULL)
		++pos;
	if (*pos == '\0')
		return NULL;
	beg = pos;
	while (*pos != '\0' && strchr(delim, *pos) == NULL)
		++pos;
	if ((dynstr = (char *)malloc(pos - beg + 1)) == NULL)
		return NULL;
	strncpy(dynstr, beg, pos - beg);
	dynstr[pos - beg] = '\0';

	if (*pos != '\0')
		++pos;

	return dynstr;
}

int main(void)
{
	char *text = "ankara,     izmir, istanbul";
	char *str;

	for (str = mystrtok(text, " ,"); str != NULL; str = mystrtok(NULL, " ,")) {
		puts(str);
		free(str);
	}

	return 0;
}
