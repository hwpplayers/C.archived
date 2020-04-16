#include <stdio.h>

void foo(int *pi)
{
	int k;

	for (k = 0; k < 10; ++k) {
		printf("%d ", *pi);
		++pi;
	}
	printf("\n");
}

void bar(int *pi)
{
	int k;

	for (k = 0; k < 10; ++k) 
		printf("%d ", pi[k]);
	printf("\n");
}

int main(void)
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	
	foo(a);
	bar(a);

	return 0;
}
