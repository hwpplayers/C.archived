#include <stdio.h>
#include <string.h>

struct PERSON {
	char name[32];
	int no;
};

int main(void)
{
	struct PERSON persons[3], *per;
	int i;

	strcpy(persons[0].name, "Kaan Aslan");
	persons[0].no = 123;

	strcpy(persons[1].name, "Ali Serce");
	persons[1].no = 234;

	strcpy(persons[2].name, "Necati Ergin");
	persons[2].no = 678;

	per = persons;

	for (i = 0; i < 3; ++i) {
		printf("%s, %d\n", per->name, per->no);
		++per;
	}

	return 0;
}
