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
	char *others[] = { "bin", "milyon", "milyar", "trilyon", "katrilyon", "katrilyar" };
	int one, ten, hundred;
	int digits3[5], temp;
	int i;

	*s = '\0';

	temp = val;
	for (i = 0; val; ++i) {
		digits3[i] = val % 1000;
		val /= 1000;
	}
	val = temp;
	if (!val) {
		strcat(s, "sifir");
		return;
	}
	while (--i >= 0) {
		hundred = digits3[i] / 100;
		ten = digits3[i] % 100 / 10;
		one = digits3[i] % 10;
		
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
			if (i != 1 || digits3[i] != 1)
				strcat(s, ones[one - 1]);
		}
		
		if (i != 0) {
			strcat(s, " ");
			strcat(s, others[i - 1]);
			strcat(s, " ");
		}
	}
}
