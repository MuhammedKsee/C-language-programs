#include<stdio.h>
main (){
	int not1,not2,ortalama;
	
	printf("Birinci notu giriniz : ");
	scanf("%d",&not1);
	
	printf("Ikinci notu giriniz : ");
	scanf("%d",&not2);
	
	ortalama = (not1*0.4)+(not2*0.6);
	
	printf("Sevgili Kubracim ortalaman su kadar : %d\n",ortalama);
	
	if(ortalama>50)
	{
		printf("Gectin yavrucum.");
	}
	
	else if (ortalama == 50)
	{
		printf("Kuzucum basardin ama biraz daha calismalisin.");
	}
	
	else
	{
		printf("Kaliyosun kusura bakma.");
	}
		
	
}

//int = bana bellekte x kadar tam say�lar i�in yer ay�r.
//int (tamsay�lar) 4 byte  

//3450 not1 i�in yer ay�rd�m [54]
