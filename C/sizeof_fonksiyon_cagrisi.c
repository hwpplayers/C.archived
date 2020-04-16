#include <stdio.h>

double foo(void)
{
	printf("Im am foo\n");

	return 1500.2;
}

int main(void)
{
	int n;

	n = sizeof(foo());
	printf("%d\n", n);
	
	return 0;
}

/* 
  Burada ekrana foo yazısı basılmaz, yalnızca 8 yazısı basılır. 

  void değerin sizeof'u yoktur. Dolayısıyla sizeof operatörünün operandı void türden olamaz. */
