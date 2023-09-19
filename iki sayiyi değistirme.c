#include<stdio.h>
main(){
	int sayi1,sayi2,sayi3;
	printf("A sayisini giriniz\n");
	scanf("%d",&sayi1);
	printf("B sayisini giriniz\n");
	scanf("%d",&sayi2);
sayi3=sayi2;
sayi2=sayi1;
sayi1=sayi3;
printf("Yeni A sayisi = %d",sayi1);
printf(" \nYeni B sayisi = %d",sayi2);
	
	
}
