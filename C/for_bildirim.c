/*Önce C++'a sonra da C99 sokulmuş olan for döngülerinde önemli bir özellik vardır. C++'ta ve C99'da for döngülerinin birinci kısmıunda bildirim yapılabilir. Bu prtaiklik sağlamaktadır. Örneğin:*/

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; ++i)
		printf("%d\n", i);

	return 0;
}
