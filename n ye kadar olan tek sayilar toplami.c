#include <stdio.h>
int main (){
	int n,toplam,a;
	a=1,toplam=0;
	printf("Lutfen sinir giriniz.\n");
	scanf("%d",&n);
	while (a<n){
		if (a%2!=1)
		{
			toplam +=a;
			a++;
		}	
		else if ( a%2==0 ) 
		{
			a++;
		}
	}
	printf("Sinira kadar olan tek sayilarin toplami = %d",toplam);
}
