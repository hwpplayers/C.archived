#include <stdio.h>
#include <string.h>

struct PERSON {
	char name[32];
	int no;
};

int main(void)
{
	struct PERSON persons[3];
	int i;

	strcpy(persons[0].name, "Kaan Aslan");
	persons[0].no = 123;

	strcpy(persons[1].name, "Ali Serce");
	persons[1].no = 234;

	strcpy(persons[2].name, "Necati Ergin");
	persons[2].no = 678;

	for (i = 0; i < 3; ++i)
		printf("%s, %d\n", persons[i].name, persons[i].no);

	return 0;
}
