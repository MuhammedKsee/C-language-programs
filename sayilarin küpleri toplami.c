#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int sayi,toplam= 0,kup,basamak;
    printf("Sayi giriniz\n");
    scanf("%d",&sayi);
    kup = sayi;
    while(sayi>0){
    basamak = sayi%10;
    sayi =sayi - basamak;
    basamak = pow(basamak,3);
    sayi/=10;
    toplam =toplam + basamak;
}
	if (toplam == kup){
	printf ("Basamaklarin kupleri toplami sayiya esittir. %d",toplam);
}
	else if (kup != toplam){
	printf ("Basamaklarin kupleri toplami sayiya esit degildir. %d",toplam);
	}
}
