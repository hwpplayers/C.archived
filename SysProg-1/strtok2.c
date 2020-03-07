#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[] = "ankara,izmir,adana,eskisehir";
	char *str;

	for (str = strtok(text, ","); str != NULL; str = strtok(NULL, ","))
		puts(str);

	return 0;
}
