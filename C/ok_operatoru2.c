#include <stdio.h>

struct POINT {
	int x, y;
};

int main(void)
{
	struct POINT pt;
	struct POINT *ppt;

	ppt = &pt;

	ppt->x = 10;
	ppt->y = 20;

	printf("(%d, %d)\n", ppt->x, ppt->y);

	return 0;
}
