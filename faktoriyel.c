#include<stdio.h>

int main ()
{
	int sayi,faktoriyel,sayac,sinir;
	printf("sayi giriniz \n");
	scanf("%d",&sayi);
	faktoriyel = 1;
	sinir = sayi;  
	while (sinir>sayac){
	
	faktoriyel = sayi*faktoriyel;
	sayi--;
	sayac++;

}	printf ("sayilarin faktoriyeli = %d",faktoriyel);
}
