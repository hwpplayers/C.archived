#include <stdio.h>

int main()
{
	int a;
	short b = 30000;
	short c = 30000;

	a = b + c;	/* 60000, sonuç int türden */
	printf("%d\n", a);
	
	return 0;
}
