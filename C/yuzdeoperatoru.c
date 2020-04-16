/*% Operatörü

İki operandlı araek aritmetik operatördür. Bu operatör soldaki oprandın sağdaki operanda bölümünden elde edilen kalan değerini verir. Öncelik tablosunda * ve / ile aynı gruptadır. 

( )    Soldan-Sağa
*  / % Soldan-Sağa
+  -   Soldan-Sağa
 =     Sağdan-Sola

Örneğin:*/

#include <stdio.h>

int main()
{
	int result;

	result = 10 % 4 - 1;
	printf("%d\n", result);
		
	return 0;
}
