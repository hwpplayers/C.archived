#include <stdio.h>

#define beep()	putchar('\7');

int main(void)
{
	beep();
	beep();

	return 0;
}
