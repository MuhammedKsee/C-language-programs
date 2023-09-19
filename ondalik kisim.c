#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	int tamsayi;
	float sayi,ondaliksayi;
	printf("Lutfen sayi giriniz.\n");
	scanf("%f",&sayi);
	tamsayi = sayi;
	ondaliksayi=sayi-tamsayi;
	printf("girilen sayinin tam kismi = %d \n",tamsayi);
	printf("girilen sayinin ondalik kismi = %f",ondaliksayi);
}

