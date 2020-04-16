/* 
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i, k;
	char ch;

	for (i = 0; i < 10; ++i) {
		for (k = 0; k < 10; ++k) {
			printf("(%d, %d)\n", i, k);
			if ((ch = getch()) == 'q')
				break;
		}
		if (ch == 'q')
			break;
	}

	return 0;
} */

#include <stdio.h>
#include <ncurses.h>

int main(void)
{
  int i, k;
  char ch;

  for (i = 0; i < 10; ++i) {
    for (k = 0; k < 10; ++k) {
      printf("(%d, %d)\n", i, k);
      if ((ch = getch()) == 'q')
	break;
    }
    if (ch == 'q')
      break;
  }

  return 0;
}
