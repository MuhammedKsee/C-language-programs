#include<stdio.h>
#include<math.h>
int main (){
	float kilo,boy,kitleindeks,boykare;
	printf("Kilonuzu giriniz\n");
	scanf("%f",&kilo);
	printf("Boyunuzu santimetre cinsinden giriniz\n");
	scanf("%f",&boy);
	boy=boy/100;
	boykare=pow(boy,2);
	kitleindeks = kilo/boykare;
	printf(" \nVucut kitle indeksi = %f",kitleindeks);	
}
