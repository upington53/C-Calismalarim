#include <stdio.h>
main(){
	int yas;
	char isim[10];
	char soyisim[10];
	printf("Ehliyet Alma Programina Hos Geldiniz");
	printf("\nLutfen Adinizi Giriniz: ");
	scanf("%s",&isim);
	printf("Lutfen Soyadinizi Giriniz: ");
	scanf("%s",&soyisim);
	printf("Lutfen Yasinizi Giriniz: ");
	scanf("%d",&yas);
	
	if (yas>=18) {
		printf("Sayin %s %s, ehliyet alabilmek icin uygunluk sagliyorsunuz.",isim,soyisim);
		printf("\nLutfen en yakin nufus dairesine gidiniz.");
		}
	else {
		printf("Sayin %s %s, ehliyet alabilmek için yasiniz tutmuyordur.",isim,soyisim);
	}
	return 0;
}

