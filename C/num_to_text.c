#include <stdio.h>
#include <string.h>

char *num_to_text(unsigned long val, char *s);

int main(void)
{
	char s[100];
	unsigned long val;

	for (;;) {
		printf("Sayi:");
		scanf("%lu", &val);
		if (val == 123)
			break;
		num_to_text(val, s);
		puts(s);		/* dokuz yüz seksen üç */
	}

	return 0;
}

char *num_to_text(unsigned long val, char *s)
{
	char *ones[] = { "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz" };
	char *tens[] = { "on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan" };
	int one, ten, hundred;

	*s = '\0';
	hundred = val / 100;
	ten = val % 100 / 10;
	one = val % 10;

	if (!val) {
		strcat(s, "sifir");
		return;
	}

	if (hundred) {
		if (hundred != 1) {
			strcat(s, ones[hundred - 1]);
			strcat(s, " ");
		}
		strcat(s, "yuz");
	}
	if (ten) {
		if (hundred)
			strcat(s, " ");
		strcat(s, tens[ten - 1]);
	}
	if (one) {
		if (ten)
			strcat(s, " ");
		strcat(s, ones[one - 1]);
	}
}
