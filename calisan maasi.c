#include<stdio.h>
int main (){
	float zam,maas,zamlimaas;
	printf("Lutfen calisanin maasini giriniz \n");
	scanf("%f",&maas);
	printf("Lutfen zam yuzdesini giriniz \n");
	scanf("%f",&zam);
	zamlimaas = (maas*((100+zam)/100));
	printf("Calisanin zamli maasi = %.2f",zamlimaas);
}
