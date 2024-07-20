#include <stdio.h>
main()
{
int sayi;
int toplam;
int kalan;

printf("Girilen sayinin basamak toplamasi uygulamasina hos geldiniz");
printf("\nLutfen sayiyi giriniz: ");
scanf("%d",&sayi);

while (sayi!=0) {
	kalan=sayi%10;
	toplam=kalan+toplam;
	sayi=sayi/10;
}
printf("Girdiginiz sayilarin basamaklar toplami= %d",toplam);
}
