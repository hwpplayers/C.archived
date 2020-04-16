/*
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	while ((ch = getch()) != 'q') {
		printf("%c\n", ch);
		if (isupper(ch))
			printf("buyuk harf\n");
		else if (islower(ch))
			printf("kucuk harf\n");
		else if (isdigit(ch))
			printf("digit karakter\n");
		else if (isspace(ch))
			printf("bosluk karakterlerinden biri\n");
		else if (ispunct(ch))
			printf("noktalama karakterlerinden biri\n");
		else
			printf("diger bir karakter\n");
	}

	return 0;
}*/

 /*https://askubuntu.com/questions/529114/why-cant-i-use-conio-h-or-ncurses-h
  https://www.cyberciti.biz/faq/linux-install-ncurses-library-headers-on-debian-ubuntu-centos-fedora/ */

#include <stdio.h>
#include <ncurses.h>
#include <ctype.h>

int main(void)
{
	char ch;

	while ((ch = getch()) != 'q') {
		printf("%c\n", ch);
		if (isupper(ch))
			printf("buyuk harf\n");
		else if (islower(ch))
			printf("kucuk harf\n");
		else if (isdigit(ch))
			printf("digit karakter\n");
		else if (isspace(ch))
			printf("bosluk karakterlerinden biri\n");
		else if (ispunct(ch))
			printf("noktalama karakterlerinden biri\n");
		else
			printf("diger bir karakter\n");
	}

	return 0;
}
