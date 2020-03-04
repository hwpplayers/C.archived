#include <stdio.h>

int main(void)
{
	int a = 100;

	*&a = 200;
	printf("%d\n", a);
	
	return 0;
}
