/*
Enes Selim
C'de bir sembolü (değişken, fonksiyon gibi şeylere denir) kullanmadan önce "deklare" etmeniz gerekir.
Deklare edilmiş sembollerin de "tanımlanması" gerekir yoksa undefined reference hatası alırsınız.
Mesela void foo(); bir deklerasyondur, derleyiciye böyle bir fonksiyon olduğunu söyler ama bunun nasıl çalıştığını, bu fonksiyonun ne yaptığını anlatmaz.İsterseniz deklerasyonla tanımlamayı birleştirebilirsiniz, main ve foo'da yaptığınız bu Şimdi main'den önce void foo(); yazın
Ve bu şekilde deneyin
*/
/*[geri dönüş değerinin türü] <fonksiyon ismi> ([parametre bildirimi])
{
	/* ... */
}*/
#include <stdio.h>

void foo()
{
  printf("I am foo\n");
}

int main()
{
  foo();

}


