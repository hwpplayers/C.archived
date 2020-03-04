#include <stdio.h>

struct DATE {
	int day;
	int month;
	int year;
};

void get_date(struct DATE *date)
{
	printf("Gun:");
	scanf("%d", &date->day);

	printf("Ay:");
	scanf("%d", &date->month);

	printf("Yil:");
	scanf("%d", &date->year);
}

void disp_date(struct DATE *date)
{
	printf("%02d/%02d/%04d\n", date->day, date->month, date->year);
}

int main(void)
{
	struct DATE date;

	get_date(&date);
	disp_date(&date);

	return 0;
}
