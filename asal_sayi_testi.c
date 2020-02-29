#include <stdio.h>

int isprime(int val)
{
	int i, result;

	result = 1;
	for (i = 2; i < val; ++i)
		if (val % i == 0) {
			result = 0;
			break;
		}
	
	return result;
}

int main(void)
{
	int i;

	for (i = 2; i < 1000; ++i)
		if (isprime(i))
			printf("%d ", i);
	printf("\n");

	return 0;
} 
