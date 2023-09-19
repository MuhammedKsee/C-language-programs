#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int sayi=1,toplam = 0,sinir,kare;
    printf("Sinir giriniz. \n");
    scanf("%d",&sinir);
    while (sayi < sinir){
        toplam += pow(sayi,2);
        sayi++;
    }
    printf("Sinira kadar olan sayilarin kareleri toplami = %d \n",toplam);
    return 0;
}
