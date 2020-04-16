#include <stdio.h>

struct DATE  {
	int day, month, year;
};

struct PERSON {
	char name[32];
	struct DATE bdate;
	int no;
};

int main(void)
{
	struct PERSON per = { "Sacit Bayram", { 12, 10, 1970 }, 2000 };

	printf("%s, %d/%d/%d, %d\n", per.name, per.bdate.day, per.bdate.month, per.bdate.year, per.no);

	return 0;
}
