#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int  tamsayi,kenar1,kenar2;
    double hipotenus,ondaliksayi;
    printf("Lutfen kenar uzunluklarını giriniz.\n");
    scanf("%d",&kenar1);
    scanf("%d",&kenar2);
    hipotenus = sqrt(pow(kenar1,2)+pow(kenar2,2));
    printf("hipotenus = %lf ",hipotenus);
    tamsayi = hipotenus;
    ondaliksayi = hipotenus - tamsayi;
    if (ondaliksayi == 0){
        printf("\nuzunluklari girilen ucgen ozel ucgendir.");
    }
    else if (ondaliksayi !=0){
            printf("\nuzunluklari girilen ucgen ozel ucgen degildir.");
    }
    return 0;

}
