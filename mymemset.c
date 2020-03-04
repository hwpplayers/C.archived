#include <stdio.h>
#include <string.h>

void mymemset(void* dest, char ch, unsigned n) 
{  
    unsigned char *pcdest = dest; 
    
    while (n-- > 0)   
    *pcdest++ = ch; 
}

int main(void)
{
	char s[200];

	mymemset(s, 'a', 199);
	s[199] = '\0';

	printf("%s\n", s);

	return 0;
}
