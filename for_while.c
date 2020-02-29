/*Şüphesiz for döngüsü olmasaydı while döngüsünden for elde edebilirdik. Yani:

ifade1;
while (ifade2) {
	<deyim>
	ifade3;
}

aslında aşağıdaki for döngüsüyle eşdeğerdir:

for (ifade1; ifade2; ifade3)
<deyim>*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	while (i < 10) {
		printf("%d\n", i);
		++i;
	}

	for (i = 0; i < 10; ++i)
		printf("%d\n", i);

	return 0;
} 
