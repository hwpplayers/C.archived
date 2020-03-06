#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exit_sys(const char *msg);

int main(void)
{
	FILE *f;
	char file_name[] = "grades.txt";
	int i;
	int number_of_students;
	char *names[8] = {"oguz", "mert", "durukan", "boran", "mustafa", "serkan", "onur", "latif"};
	char *snames[8] = { "aksoy", "kaya", "vural", "altan", "karpuz", "sert", "mulaim", "naif" };

	if ((f = fopen(file_name, "w")) == NULL)
		exit_sys("can not open file\n");

	srand((unsigned)time(NULL));

	number_of_students = rand() % 20 + 30;

	for (i = 0; i < number_of_students; ++i)
		fprintf(f, "%s %s %d\n", names[rand() % 8], snames[rand() % 8], rand() % 101);

	fclose(f);

	return 0;
}

void exit_sys(const char *msg)
{
	printf(msg);
	exit(EXIT_FAILURE);
}
