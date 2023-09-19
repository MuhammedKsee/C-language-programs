#include <stdio.h>
#include <math.h>
int main (){
	int sayi1,sayi2,islem,sonuc,topla,cikar,bol,carp;
	printf("Birinci sayiyi giriniz.\n");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz.\n");
	scanf("%d",&sayi2);
	printf ("Yapmak istediginiz islemin numarasini yaziniz\n(toplama=1,cikarma=2,carpma=3,bolme=4)\n");
	scanf("%d",&islem);
	if (sayi2 == 0 ){
		printf("Ikinci girilen sayi 0 oldugu icin sayi tanimsizdir.");
	}
	else if (islem == 1){
		sonuc = sayi1+sayi2;
	}
	else if (islem ==2) {
		sonuc = sayi1-sayi2;
	}
	else if (islem ==3){
		sonuc = sayi1*sayi2;
	}
	else if (islem == 4){
		sonuc = sayi1/sayi2;
	}
	printf ("yaptiginiz islemin sonucu = %d",sonuc);
}

