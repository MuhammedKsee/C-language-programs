#include<math.h>
#include<stdio.h>
int main (){
	int sayi,bolen=1;
	printf("Sayi giriniz.\n");
	scanf("%d",&sayi);
	printf("sayinin tam bolenleri %d \n",sayi);
	for(bolen;sayi;1){
	if (sayi%bolen==0){
		printf("\n%d",bolen);}
	bolen++;
	}
}
