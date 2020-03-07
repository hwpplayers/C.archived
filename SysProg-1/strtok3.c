#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *mystrtok(char *str, const char *delim)
{
	static char *pos;
	char *beg;

	if (str != NULL)
		pos = str;

	while (*pos != '\0' && strchr(delim, *pos) != NULL) 
		++pos;
	if (*pos == '\0')
		return NULL;
	beg = pos;
	while (*pos != '\0' && strchr(delim, *pos) == NULL)
		++pos;
	if (*pos != '\0')
		*pos++ = '\0';

	return beg;
}

int main(void)
{
	char text[] = "ankara,     izmir";
	char *str;

	for (str = mystrtok(text, " ,"); str != NULL; str = mystrtok(NULL, " ,"))
		puts(str);

	return 0;
}
