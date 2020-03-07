#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[] = "ankara,izmir,adana,eskisehir";
	char *str;

	str = strtok(text, ",");
	while (str != NULL) {
		puts(str);
		str = strtok(NULL, ",");
	}

	return 0;
}
