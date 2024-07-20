#include <stdio.h>
main ()
{
	int fiyat,adet;
	float indirimli1, indirimli2;
	printf("Lutfen almak istediginiz kitabin fiyatini giriniz:");
	scanf("%d", fiyat);
	printf("Lutfen kac adet oldugunu giriniz:");
	scanf("%d", adet);
	if (adet<50) (indirimli1=fiyat*adet*0.9) printf("Toplam ucret= %d", indirimli1);
	else if (indirimli2=fiyat*adet*0.7) printf("Toplam tutar= %d",indirimli2);
}
