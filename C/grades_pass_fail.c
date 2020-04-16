#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_GRADE	50

void exit_sys(const char *msg);

int main(void)
{
	FILE *fgrades, *fpass, *ffail;
	char grades_file_name[] = "grades.txt";
	char pass_file_name[] = "pass.txt";
	char fail_file_name[] = "fail.txt";	
	char name[20], sname[20];
	int grade;

	if ((fgrades = fopen(grades_file_name, "r")) == NULL)
		exit_sys("can not open file\n");

	if ((fpass = fopen(pass_file_name, "w")) == NULL)
		exit_sys("can not open file\n");

	if ((ffail = fopen(fail_file_name, "w")) == NULL)
		exit_sys("can not open file\n");

	while (fscanf(fgrades, "%s%s%d", name, sname, &grade) != EOF)
		if (grade < PASS_GRADE)
			fprintf(ffail, "%s %s %d\n", name, sname, grade);
		else
			fprintf(fpass, "%s %s %d\n", name, sname, grade);

	if (ferror(fgrades))
		exit_sys("can not read file\n");
	
	fclose(fgrades);
	fclose(fpass);
	fclose(ffail);

	return 0;
}

void exit_sys(const char *msg)
{
	printf(msg);
	exit(EXIT_FAILURE);
}
