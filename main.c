#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int sayi,toplam,kup,basamak;
    printf("Sayi giriniz\n");
    scanf("%d",&sayi);
    while(sayi>0){
    basamak = sayi%10;
    basamak = pow(basamak,3);
    sayi/=10;
    toplam +=basamak;
}
	if (basamak = toplam){
	printf ("Basamaklarin kupleri toplami sayiya esittir. %d",toplam);
}	else if (basamak != toplam){
	printf ("Basamaklarin kupleri toplami sayiya esit degildir. %d",toplam);
	}
	return 0;
}
