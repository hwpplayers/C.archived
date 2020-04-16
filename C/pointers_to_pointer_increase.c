#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	while (*argv != NULL) 
		puts(*argv++);
	
	return 0;
}
