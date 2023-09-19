#include<stdio.h>
#include<math.h>
int main (){
	float p,k,h,c,a,b;
	printf("Lutfen k uzunlugunu giriniz.\n");
	scanf("%f",&k);
	printf("Lutfen p uzunlugunu giriniz.\n");
	scanf("%f",&p);
	h = (p*k);
	h = sqrt(h);
	a = p+k;
	b = (a*k);
	b = sqrt(b);
	c = (a*p);
	c = sqrt(c);
	printf("h degeri = %.0f\n",h);
	printf("b degeri = %.0f\n",b);
	printf("c degeri = %.0f\n",c);
}
