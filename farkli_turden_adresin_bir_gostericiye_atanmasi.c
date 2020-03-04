#include <stdio.h>

int main(void)
{
	char s[] = "aaaa";
	int *pi;

	pi = (int *)s;

	printf("%d\n", *pi);	/* buradaki sayı kaçtır? */

	return 0;
}
