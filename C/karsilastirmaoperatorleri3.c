#include <stdio.h>

int main()
{
	int a = 20, b;

	b = 0 < a < 10;	/* dikkat bu ifade a'nın 0 ile 10 arasında olduğuna bakamaz */
	printf("a = %d, b = %d\n", a, b); 

	return 0;
}
