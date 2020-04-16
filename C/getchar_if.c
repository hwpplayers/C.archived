/*Sınıf Çalışması: Klavyeden getchar fonksiyonuyla bir karakter okuyunuz. Karakter ‘a’ ise ali, ‘b’ ise burhan, ‘c’ ise cemal ‘d’ ise demir, ‘e’ ise ercan ve bunların dışında bir karakterse hiçbiri yazısını bastırınız. 

  Çözüm: */

#include <stdio.h>

int main(void)
{
	char ch;

	ch = getchar();

	if (ch == 'a')
		printf("ali\n");
	else if (ch == 'b')
		printf("burhan\n");
	else if (ch == 'c')
		printf("cemal\n");
	else if (ch == 'd')
		printf("demir\n");
	else if (ch == 'e')
		printf("ercan\n");
	else
		printf("hicbiri\n");

	return 0;
}
