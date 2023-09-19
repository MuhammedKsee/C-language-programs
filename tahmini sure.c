#include<stdio.h>
main (){
	float orthiz,sure,mesafe;
	int sn,dk,s;
	printf("Mesafeyi Km cinsinden giriniz\n");
	scanf("%f",&mesafe);
	printf("Ortalama hizi Km/h cinsinden giriniz\n");
	scanf("%f",&orthiz);
	sure=mesafe/orthiz*3600;
	sn=sure;
	dk=sn/60;
	s=dk/60;
	printf("Tahmini varis suresi \n%d",s);
	printf(" saat");
}
