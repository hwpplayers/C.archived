/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	int i;

	srand(time(0));

	while (getch() != 'q') {
		for (i = 0; i < 16; ++i) 
			putchar('A' + rand() % 26);
		putchar('\n');
	}

	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

int main()
{
	int i;

	srand(time(0));

	while (getch() != 'q') {
		for (i = 0; i < 16; ++i) 
			putchar('A' + rand() % 26);
		putchar('\n');
	}

	return 0;
}
