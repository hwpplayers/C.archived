#include <stdio.h>

#pragma pack(1)

struct SAMPLE {
	char a;
	int b;
	char c;
	int d;
};

#pragma pack()

int main(void)
{
	struct SAMPLE s;

	printf("%u\n", sizeof(s));

	return 0;
}
