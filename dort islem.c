#include<stdio.h>
int main()
{
	int sayi1,sayi2,toplama,carpma,bolme,cikarma;
	printf("ilk sayiyi giriniz \n");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz \n");
	scanf("%d",&sayi2);
	toplama = sayi1 + sayi2;
	carpma = sayi1 * sayi2;
	bolme = sayi1 / sayi2;
	cikarma = sayi1-sayi2;
	printf("sayilarin toplami = %d",toplama);
	printf("\nsayilarin carpimi = %d",carpma);
	printf("\nsayilarin cikarimi = %d",cikarma);
	printf("\nsayilarin bolumu = %d",bolme);
}



