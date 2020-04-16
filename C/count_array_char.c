#include <stdio.h>

int getch_count(char *str, char ch)
{
	int count = 0;

	while (*str != '\0') {
		if (*str == ch)
			++count;
		++str;
	}

	return count;
}

int main(void)
{ 
	char s[] = "ankara";
	int result;

	result = getch_count(s, 'a');
	printf("%d\n", result);
	
	return 0;
}
