#include<stdio.h>
int main (){
	int kenar1,kenar2,kenar3,alan,u;
	printf("Lutfen 1.kenari giriniz,\n");
	scanf("%d",&kenar1);
	printf("Lutfen 2.kenari giriniz,\n");
	scanf("%d",&kenar2);
	printf("Lutfen 3.kenari giriniz,\n");
	scanf("%d",&kenar3);
	u = (kenar1+kenar2+kenar3)/2;
	alan = (u*(u-kenar1)*(u-kenar2)*(u-kenar3))^(1/2);
	printf ("Uckenin alaný = %d",alan);
}
