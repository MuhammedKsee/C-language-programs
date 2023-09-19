#include<stdio.h>
int main (){
	float h,m,Ek,Ep,v,g;	
	g = 9.8;	
	printf("Cismin yuksekligini giriniz.\n");
	scanf("%f",&h);
	printf("Cismin kutlesini giriniz.\n");
	scanf("%f",&m);
	printf("Cismin hizini giriniz.\n");
	scanf("%f",&v);
	Ep = m*g*h;
	Ek = (m*v*v)/2;
	printf("Cismin potansiyel enerjisi = %.0f \n",Ep);
	printf("Cismin kinetik enerjisi = %.0f ",Ek);
	
}
