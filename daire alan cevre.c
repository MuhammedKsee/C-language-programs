#include<stdio.h>
#include<math.h>
main ()
{
	float alan,cevre,yaricap,pi,sayi,yaricapkare;
	printf("Lutfen dairenin yaricapini giriniz \n");
	scanf("%f",&yaricap);
	pi = 3;
	yaricapkare= pow(yaricap,2);
	alan = pi*yaricapkare;
	cevre = 2*yaricap*pi;
	printf("cevre = %.0f",cevre);
	printf("\n alan = %.0f",alan);
}
