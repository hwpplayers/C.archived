#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "izmir";
	char d[32] = "ankara";

	strncpy(d, s, 30);
	puts(d);		/* izmir çıkacak fakat 24 tane null karakter d'ye eklenecek */

	return 0;
}
