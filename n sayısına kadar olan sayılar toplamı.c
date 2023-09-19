#include <stdio.h>
int main (){
	int n,toplam,a;
	a=1;
	printf("Lutfen sinir giriniz.\n");
	scanf("%d",&n);
	while (a<n){
		toplam +=a;
		a++;		
	}
	printf("Sinira kadar olan sayilarin toplami = %d",toplam);
}
