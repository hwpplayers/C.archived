#include <stdio.h>

#define SIZE		10

int main(void)
{
	int a[SIZE] = { 3, 7, 3, 6, 6, 8, 7, 8, 6, 4 };
	int i, k;
	int count, max_count, max_count_val;

	max_count = 0;
	for (i = 0; i < SIZE; ++i) {
		count = 1;
		for (k = i + 1; k < SIZE; ++k)
		if (a[i] == a[k])
			++count;
		if (count > max_count) {
			max_count = count;
			max_count_val = a[i];
		}
	}
	printf("Mod = %d\n", max_count_val);
	
	return 0;
}
