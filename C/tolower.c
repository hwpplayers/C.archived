/*toupper ya da tolower kullanımına tipik bir örnek de şöyle olabilir:
 
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
	char ch;

	do
	{
			printf("(e)vet/(h)ayir?");
			ch = tolower(getch());
			printf("%c\n", ch);
	} while (ch != 'e' && ch != 'h');

	if (ch == 'e')
		printf("evet secildi\n");
	else
		printf("hayir secildi\n");

	return 0;
}*/

/*https://askubuntu.com/questions/529114/why-cant-i-use-conio-h-or-ncurses-h
 https://www.cyberciti.biz/faq/linux-install-ncurses-library-headers-on-debian-ubuntu-centos-fedora/*/

#include <stdio.h>
#include <ctype.h>
#include <ncurses.h>

int main(void)
{
  char ch;

  do
  {
    printf("(e)vet/(h)ayir?");
    ch = tolower(getch());
    printf("%c\n", ch);
  }  while (ch != 'e' && ch != 'h');

  if (ch == 'e')
    printf("evet secildi\n");
  else
    printf("hayir secildi\n");

  return 0;
}
