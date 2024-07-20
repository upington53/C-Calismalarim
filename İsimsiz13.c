#include <stdio.h>
main(){
	int sayi1,sayi2,secim;
	
	printf("Hesap Makineme Hos Geldin");
	printf("\nLutfen ilk sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("\nLutfen ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	printf("\nAsagidaki seceneklerden yapmak istediginiz islemi tuslayiniz.");
	printf("\n[1]Toplama Islemi\n[2]Cikarma Islemi\n[3]Carpma Islemi\n[4]Bolme Islemi");
	printf("\n Yapmak Istediginiz Islem: ");
	scanf("%d",&secim);
	switch (secim){
		case 1:printf("Girmis oldugunuz sayilarin toplama isleminin sonucu: %d",sayi1+sayi2)break;
		case 2:printf("Girmis oldugunuz sayilarin cikarma isleminin sonucu: %d",sayi1-sayi2);break;
		case 3:printf("Girmis oldugunuz sayilarin carpma isleminin sonucu: %d",sayi1*sayi2);break;
		case 4:printf("Girmis oldugunuz sayilarin bolme isleminin sonucu: %d",sayi1/sayi2);break;
		default: printf("Yanlis bir deger girdin gardas");
	}
	/*                     
	                         SWÝTCH - CASE YERÝNE ÝF KULLANIMI ÝLE YAPARSAK


	if (secim==1){
		printf("Girmis oldugunuz sayilarin toplama isleminin sonucu: %d",sayi1+sayi2);
	}
	else if (secim==2){
		printf("Girmis oldugunuz sayilarin cikarma isleminin sonucu: %d",sayi1-sayi2);
	}
	else if (secim==3){
		printf("Girmis oldugunuz sayilarin carpma isleminin sonucu: %d",sayi1*sayi2);
	}
	else if (secim==4){
		printf("Girmis oldugunuz sayilarin bolme isleminin sonucu: %d",sayi1/sayi2);
	}
	else {
		printf("Yanlis bir deger girdin gardas");
	}*/
}
