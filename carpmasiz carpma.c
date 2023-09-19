#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac=0,sayi1,sayi2,sonuc=0;
    printf("Birinci sayiyi giriniz.\n");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz.\n");
    scanf("%d",&sayi2);
    while (sayac<sayi2)
        {
        sayac++;
        sonuc += sayi1;
        }
    printf("Sayilarin carpimi = %d",sonuc);
    return 0;
}
