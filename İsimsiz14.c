#include <stdio.h>
main()
{
int sayi;
int toplam;
int i=0;

printf("Girilen sayiya kadar toplama programina hos geldiniz.");
printf("\nLutfen sayiyi giriniz: ");
scanf("%d",&sayi);

while (i<=sayi) {
	printf("\nGirdiniz sayiya kadar olan degerler: %d",i);
	toplam=toplam+i;
	i++;
}
printf("\nGirdiniz sayiya kadar olan sayilarin toplami= %d",toplam);
}
