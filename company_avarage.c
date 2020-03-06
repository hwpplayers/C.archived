#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN		32

typedef struct tagCOMPANYINFO {
	char name[MAX_LEN];
	int val1, val2, val3;
} COMPANYINFO;


int main(void)
{
	FILE *f;
	char file_name[] = "test.txt";
	int i;
	COMPANYINFO companies[3];

	if ((f = fopen(file_name, "r")) == NULL) {
		printf("can not open file...%s\n", file_name);
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < 3; ++i) {
		fscanf(f, "%s %d %d %d", companies[i].name, &companies[i].val1, &companies[i].val2, &companies[i].val3);
	}
	

	if (ferror(f)) {
		printf("can not read file....!\n");
		exit(EXIT_FAILURE);
	}
	
	for (i = 0; i < 3; ++i) {
		double avg = (companies[i].val1 + companies[i].val2 + companies[i].val3) / 3.;

		printf("%s ---> %lf\n", companies[i].name, avg);
	}

	fclose(f);

	return 0;
}
