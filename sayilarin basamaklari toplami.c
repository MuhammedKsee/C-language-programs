#include <stdio.h>
#include <math.h>
int main (){
	int ilksayi,sayi,bas,top;
	printf("Lutfen sayi giriniz.\n");
	scanf("%d",&sayi);
	while(sayi>0){
		bas = sayi%10;
		sayi/=10;
		top +=bas;
	}
	printf("Sayilarin basamaklari toplami = %d",top);	
}
