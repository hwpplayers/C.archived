/*#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("bir karakter giriniz:");
	ch = getch();
	printf("\ngirilen karakter: %c\n", ch);

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

  printf("bir karakter giriniz:");
  ch = getch();
  printf("\ngirilen karakter: %c\n", ch);

  return 0;
}
