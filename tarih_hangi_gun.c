#include <stdio.h>

int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int totaldays(int day, int month, int year)
{
	int i;
	long tdays = 0;
	int montab[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (i = 1900; i < year; ++i)
		tdays += isleap(i) ? 366 : 365;

	montab[1] = isleap(year) ? 29 : 28;

	for (i = 0; i < month - 1; ++i)
		tdays += montab[i];

	tdays += day;

	return tdays;
}

void printday(int day, int month, int year)
{
	long tdays;

	tdays = totaldays(day, month, year);

	switch (tdays % 7) {
		case 0: 
			printf("Pazar\n");
			break;
		case 1:
			printf("Pazartesi\n");
			break;
		case 2:
			printf("Sali\n");
			break;
		case 3:
			printf("Carsamba\n");
			break;
		case 4:
			printf("Persembe\n");
			break;
		case 5:
			printf("Cuma\n");
			break;
		case 6:
			printf("Cumartesi\n");
			break;
	}
}

int main(void)
{
	printday(10, 9, 1993);

	return 0;
}
