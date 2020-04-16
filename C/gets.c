#include <stdio.h>

int main(void)
{
	char s[100];
	int i;

	gets(s);
	
	for (i = 0; s[i] != '\0'; ++i)
		putchar(s[i]);
	putchar('\n');

	return 0;
}

/*hwpplayer1@hwpplayer1-Aspire-V3-772G:~/Projects/playground/playground-C$ gcc -o fgets gets.c 
gets.c: In function ‘main’:
gets.c:8:2: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
  gets(s);
  ^~~~
  fgets
/tmp/ccZYEfHF.o: In function `main':
gets.c:(.text+0x24): warning: the `gets' function is dangerous and should not be used.
*/
