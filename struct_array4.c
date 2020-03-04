#include <stdio.h>
#include <string.h>

struct PERSON {
	char name[32];
	int no;
};

void sort_persons_byname(struct PERSON *per, int size);
void sort_persons_byno(struct PERSON *per, int size);
void disp_persons(struct PERSON *per, int size);

int main(void)
{
	struct PERSON persons[] = {
		{ "Selami Hakyemez", 123 }, { "Ahmet Hamdi Tanpinar", 523 }, { "Hulisi Sen", 323 },
		{ "Siracettin Bilyap", 654 }, { "Ali Ipek", 234 }
	};

	sort_persons_byname(persons, 5);
	disp_persons(persons, 5);
	printf("-----------\n");
	sort_persons_byno(persons, 5);
	disp_persons(persons, 5);

	return 0;
}

void sort_persons_byname(struct PERSON *per, int size)
{
	int i, k;
	struct PERSON temp;

	for (i = 0; i < size - 1; ++i)
		for (k = 0; k < size - 1 - i; ++k)
			if (strcmp(per[k].name, per[k + 1].name) > 0) {
				temp = per[k];
				per[k] = per[k + 1];
				per[k + 1] = temp;
			}
}

void sort_persons_byno(struct PERSON *per, int size)
{
	int i, k;
	struct PERSON temp;

	for (i = 0; i < size - 1; ++i)
		for (k = 0; k < size - 1 - i; ++k)
			if (per[k].no > per[k + 1].no) {
				temp = per[k];
				per[k] = per[k + 1];
				per[k + 1] = temp;
			}
}
void disp_persons(struct PERSON *per, int size)
{
	int i;

	for (i = 0; i < size; ++i)
		printf("%s, %d\n", per[i].name, per[i].no);
}
