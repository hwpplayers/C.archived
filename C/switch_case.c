/*#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;

	for (;;)  {
		printf("CSD>");
		ch = getch();
		printf("%c\n", ch);
		if (ch == 'q')
			break;
		switch (ch) {
			case 'r':
			case 'd':
				printf("delete command\n");
				break;
			case 'c':
				printf("copy command\n");
				break;
			case 'm':
				printf("move command\n");
				break;
			default:
				printf("bad command!\n");
				break;
		}
	}

	return 0;
}*/


#include <stdio.h>
#include <ncurses.h>

int main()
{
  char ch;

  for (;;) {
    printf("CSD>");
    ch = getch();
    printf("%c\n", ch);
    if (ch == 'q');
         break;
	 switch (ch) {
         case 'r':
	 case 'd':
	   printf("delete command\n");
	   break;
	 case 'c':
	   printf("copy command\n");
	   break;
	 case 'm':
	   printf("move command\n");
	   break;
	 default:
	   printf("bad command!\n");
	   break;
	 }
  }

  return 0;
}
