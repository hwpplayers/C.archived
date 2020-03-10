#include <stdio.h>
#include <stdlib.h>

int comparer1(const void *pv1, const void *pv2)
{
	const int *pi1 = (const int *)pv1;
	const int *pi2 = (const int *)pv2;

	if (*pi1 > *pi2)
		return 1;
	if (*pi1 < *pi2)
		return -1;

	return 0;
}

typedef struct tagPERSON {
	char name[32];
	int no;
} PERSON;

int comparer2(const void *pv1, const void *pv2)
{
	const PERSON *p1 = (const PERSON *)pv1;
	const PERSON *p2 = (const PERSON *)pv2;

	return strcmp(p1->name, p2->name);
}

int comparer3(const void *pv1, const void *pv2)
{
	const PERSON *p1 = (const PERSON *)pv1;
	const PERSON *p2 = (const PERSON *)pv2;

	return p1->no - p2->no;
}

int main(void)
{
	{
		int a[10] = { 34, 23, 45, 11, 78, 43, 34, 87, 33, 21 };
		int i;

		qsort(a, 10, sizeof(int), comparer1);

		for (i = 0; i < 10; ++i)
			printf("%d ", a[i]);
		printf("\n");
		printf("--------------------\n");
	}

	{
		int i;
		PERSON persons[] = {
			{ "Ali Serce", 123 }, { "Kaan Aslan", 456 }, { "Necati Ergin", 321 },
			{ "John Lennon", 54 }, { "Abidin Yarata", 115 }
		};

		qsort(persons, 5, sizeof(PERSON), comparer2);
		for (i = 0; i < 5; ++i)
			printf("%s, %d\n", persons[i].name, persons[i].no);
		printf("--------------------\n");
		qsort(persons, 5, sizeof(PERSON), comparer3);
		for (i = 0; i < 5; ++i)
			printf("%s, %d\n", persons[i].name, persons[i].no);

		return 0;
	}
}
