#include<stdio.h>
#include<math.h>
int main(){
	double f,e,alan,alfa;
	printf("Lutfen bir aci giriniz.\n");
	scanf("%lf",&alfa);
	printf("Lutfen birinci kosegeni giriniz.\n");
	scanf("%lf",&f);
	printf("Lutfen ikinci kosegeni giriniz.\n");
	scanf("%lf",&e);
	alfa =sin(alfa);
	alan = (f*e*-alfa)/2;
	printf("Dortgenin alani = %.0lf",alan);
}
