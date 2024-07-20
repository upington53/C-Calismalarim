#include <stdio.h>
#include <stdlib.h>
main()
{

	int sayilar; //normal deðiþken
	int rakamlar[]={0,1,2,3}; //dizi
	//Index, dizilerdeki eleman sayýsýdýr ve baþlangýç deðer 0'dýr.
	//printf("%d\n",rakamlar); bu komut yazýnca saçmalýyor, deðiþik
	printf("%d\n",rakamlar[0]);
	printf("%d\n",rakamlar[1]);
	printf("%d\n",rakamlar[2]);
	printf("%d\n",rakamlar[3]);
	
	char isim[]={'u','l','a','s'};
	printf("%s\n",isim); //burada adýmý direkt yazdý
	char sehir[2]={'r','i','z','e'}; //burada ise ilk 2 deðerini getirdi
	printf("%s\n",sehir);
}
