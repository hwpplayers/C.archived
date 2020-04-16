#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int age, sum = 0, count = 0;

	if ((f = fopen(file_name, "r")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	while (fscanf(f, "%*s%*s%*s%d", &age) != EOF) {
		sum += age;
		count++;
	}

	if (ferror(f)) {
		printf("can not read file....!\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Yas Ortalamasi:%lf\n", (double) sum / count);

	fclose(f);

	return 0;
}
