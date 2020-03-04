#include <stdio.h>

void foo(int *pi, int size)
{
	int k;

	for (k = 0; k < size; ++k) {
		printf("%d ", *pi);
		++pi;
	}
	printf("\n");
}

void bar(int *pi, int size)
{
	int k;

	for (k = 0; k < size; ++k) 
		printf("%d ", pi[k]);
	printf("\n");
}

int main(void)
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int b[5] = { 1, 2, 3, 4, 5 };
	
	foo(a, 10);
	bar(b, 5);

	return 0;
}
