/*Sınıf Çalışması: 10 elemanlı int türden bir dizi tanımlayınız. Bu dizinin elemanlarını ters yüz eden aşağıdaki prototipe sahip fonksiyonu yazarak test ediniz:

void rev_array(int *pi, int size);

Çözüm: */

#include <stdio.h>

void rev_array(int *pi, int size)
{
	int i, temp;

	for (i = 0; i < size / 2; ++i) {
		temp = pi[i];
		pi[i] = pi[size - i - 1];
		pi[size - i - 1] = temp;
	}
}

void disp_array(int *pi, int size)
{
	int i;

	for (i = 0; i < size; ++i)
		printf("%d ", pi[i]);
	printf("\n");
}

int main(void)
{ 
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	rev_array(a, 10);
	disp_array(a, 10);

	return 0;
}
