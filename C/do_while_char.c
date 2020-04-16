/*#include <stdio.h>

int main(void)
{
	char ch;

	ch = ' ';
	while (ch != 'e' && ch != 'h') {
		printf("(e)vet/(h)ayir?");
		ch = getch();
		printf("%c\n", ch);
	} 

	if (ch == 'e')
		printf("evet secildi\n");
	else
		printf("hayir secildi\n");

	return 0;
}*/
#include <stdio.h>
#include <ncurses.h>

int main(void)
{
	char ch;

	ch = ' ';
	while (ch != 'e' && ch != 'h') {
		printf("(e)vet/(h)ayir?");
		ch = getch();
		printf("%c\n", ch);
	} 

	if (ch == 'e')
		printf("evet secildi\n");
	else
		printf("hayir secildi\n");

	return 0;
}
