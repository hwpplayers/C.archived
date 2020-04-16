/*Burada kontrolün sonda yapıldığı while döngüsü daha uygundur:

#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	do
	{
		printf("(e)vet/(h)ayir?");
		ch = getch();
		printf("%c\n", ch);
	} while (ch != 'e' && ch != 'h');

	if (ch == 'e')
		printf("evet secildi\n");
	else
		printf("hayir secildi\n");

	return 0;
}
*/
 /*https://askubuntu.com/questions/529114/why-cant-i-use-conio-h-or-ncurses-h
https://www.cyberciti.biz/faq/linux-install-ncurses-library-headers-on-debian-ubuntu-centos-fedora/
*/

#include <stdio.h>
#include <ncurses.h>

int main(void)
{
	char ch;

	do
	{
		printf("(e)vet/(h)ayir?");
		ch = getch();
		printf("%c\n", ch);
	} while (ch != 'e' && ch != 'h');

	if (ch == 'e')
		printf("evet secildi\n");
	else
		printf("hayir secildi\n");

	return 0;
}
