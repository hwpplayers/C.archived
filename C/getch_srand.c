/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	srand(time(0));

	while (getch() != 'q') {
		switch (rand() % 5) {
			case 0:
				printf("Ali\n");
				break;
			case 1:
				printf("Veli\n");
				break;
			case 2:
				printf("Selami\n");
				break;
			case 3:
				printf("Ayse\n");
				break;
			case 4:
				printf("Fatma\n");
				break;
		}
	}

	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

int main()
{
	srand(time(0));

	while (getch() != 'q') {
		switch (rand() % 5) {
			case 0:
				printf("Ali\n");
				break;
			case 1:
				printf("Veli\n");
				break;
			case 2:
				printf("Selami\n");
				break;
			case 3:
				printf("Ayse\n");
				break;
			case 4:
				printf("Fatma\n");
				break;
		}
	}

	return 0;
}
