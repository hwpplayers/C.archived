#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
		
	if ((f = fopen("test.dat", "w")) == NULL) {
		printf("cannot open file!..\n");
		exit(EXIT_FAILURE);
	}
	

	return 0;
}
