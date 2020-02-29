/*while döngülerinin de yanlışlıkla boş deyim kapatılması durumuyla karşılaşılmaktadır. Örneğin:

#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	while (ch = getch(), ch != 'q');
		putchar(ch);
	putchar('\n');
	
	return 0;
}

Burada artık döngünün içerisinde boş deyim vardır. */

/*https://askubuntu.com/questions/529114/why-cant-i-use-conio-h-or-ncurses-h
https://www.cyberciti.biz/faq/linux-install-ncurses-library-headers-on-debian-ubuntu-centos-fedora/
*/

#include <stdio.h>
#include <ncurses.h>

int main(void)
{
	char ch;

	while (ch = getch(), ch != 'q');
		putchar(ch);
	putchar('\n');
	
	return 0;
}
