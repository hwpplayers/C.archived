#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[10];
	int i;

	memset(a, 0, 10 * sizeof(int));
	
	for (i = 0; i < 10; ++i)
		printf("%d ", a[i]);   
	printf("\n");

	return 0;
}
