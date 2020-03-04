#include <stdio.h>

struct POINT {
	int x;
	int y;
};

int main(void)
{
	struct POINT points[5] = {
		{ 1, 2 }, { 4, 7 }, { 6, 8 }, { 7, 9 }, { 3, 4 }
	};
	int i;

	for (i = 0; i < sizeof(points) / sizeof(*points); ++i)
		printf("(%d, %d)\n", points[i].x, points[i].y);

	return 0;
}
