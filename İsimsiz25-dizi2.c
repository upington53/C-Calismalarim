#include <stdio.h>
main()
{
	int sayilar[]={10,20,30,40,50};
	int i;
	for(i=0;i<5;i++) {
		printf("Sayilarin %d.ci elemani= %d\n", i+1,sayilar[i]);
	}
	
	int j;
	char sehir[]={'r','i','z','e'};
	for(j=0;j<4;j++){
		printf("%c ",sehir[j]);
	}
	int toplam;
	for (i=0;i<5;i++) {
		toplam=toplam+sayilar[i];
	} printf("\nToplam: %d",toplam);
	
	int carpim=1;
	for (i=1;i<5;i++) {
		carpim=carpim*sayilar[i];
	} printf("\nCarpim: %d",carpim);
	
	
}
