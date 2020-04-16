#include <stdio.h>

int main()
{
	int a;

	printf("Bir sayi giriniz:");
	scanf("%d", &a);

	switch (a) {
		case 1:
			printf("bir\n");
			break;
		case 2:
			printf("iki\n");
			break;
		case 3:
			printf("uc\n");
			break;
		case 4:
			printf("dort\n");
			break;
		default:
			printf("hicbiri\n");
			break;
	}

	printf("son\n");

	return 0;
}
