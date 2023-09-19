#include<stdio.h>
#include<math.h>
int main(){
	double d,sayi,x1,x2,dskriminant,a,b,c;
	printf("Lutfen Ax2+Bx+C=0 seklindeki denklemin A,B ve C sayilarini sirasiyla giriniz.\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	b=d;
	dskriminant=pow(b,2)-4*a*c;
	b = sqrt(b);
	if(dskriminant>0){
		x1=(-b)/(2*a);
		x2=(-b)/(2*a);
		printf("x1 = %d",x1);
		printf("X2 = %d",x2);		
	}
	else if(dskriminant==0){
		b=d;
		x1=(-b)/(2*a);
		x2=x1;
		printf("denklemin kokleri esittir = %d",x1);
	}
	else 
	printf("Denklemin koku yoktur.");
}
