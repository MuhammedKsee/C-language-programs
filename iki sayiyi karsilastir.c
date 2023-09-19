#include<stdio.h>
int main(){
	int sayi1,sayi2;
	printf("Ilk sayiyi giriniz\n");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz\n");
	scanf("%d",&sayi2);
	if (sayi1>sayi2)
		printf("Ilk girilen sayi ikinci sayidan buyuktur");
	else if (sayi1<sayi2)
	{
 	printf("Ikinci girilen sayi birinci sayidan buyuktur");
	}
	else if (sayi1=sayi2) {
	printf("Girilen iki sayi da birbirine esittir.");
	}
}
