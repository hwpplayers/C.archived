/*Bazen programcılar bu fonksiyonu bir tuşa basılana kadar akışı bekletmek için de kullanmaktadır. Örneğin:

#include <stdio.h>
#include <conio.h>

int main(void)
{
	printf("Press any key to continue...\n");
	getch();
	printf("ok\n");

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
	printf("Press any key to continue...\n");
	getch();
	printf("ok\n");

	return 0;
}
