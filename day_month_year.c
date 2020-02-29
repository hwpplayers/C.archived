#include <stdio.h>

int main()
{
	int day, month, year;

	printf("Gun:");
	scanf("%d", &day);

	printf("Ay:");
	scanf("%d", &month);

	printf("Yil:");
	scanf("%d", &year);

	printf("%02d-", day);
	switch (month) {
		case 1:
			printf("Ocak");
			break;
		case 2:
			printf("Subat");
			break;
		case 3:
			printf("Mart");
			break;
		case 4:
			printf("Nisan");
			break;
		case 5:
			printf("Mayis");
			break;
		case 6:
			printf("Haziran");
			break;
		case 7:
			printf("Temmuz");
			break;
		case 8:
			printf("Agustos");
			break;
		case 9:
			printf("Eylul");
			break;
		case 10:
			printf("Ekim");
			break;
		case 11:
			printf("Kasim");
			break;
		case 12:
			printf("Aralik");
			break;
	}
	printf("-%02d\n", year);

	return 0;
}
