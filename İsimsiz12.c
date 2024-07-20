#include <stdio.h>
main()
{
	int sec;
	printf("Hos geldiniz, lutfen 1 ile 3 arasinda sayi giriniz:");
	scanf("%d",&sec);
	switch (sec){
		case 1:printf("1'i sectiniz, tebrikler'");break;
		case 2:printf("2'yi sectiniz, helal");break;
		case 3:printf("3'u sectiniz, aferin");break;
		default:printf("Sana 1 ile 3 arasi sayi gir dedik");
	}
}
