#include <stdio.h>
main(){
	int secim;
	int x,y;
	float a,b;
	float islem;
	float bolum;
	int toplam,cikarma,carpma;
	printf("Dort islem hesap makinesi uygulamasina hos geldiniz :))\n");
	printf("Lutfen islem yapacaginiz sayilari giriniz: \n");
	scanf ("%d %d",&x,&y);
	printf("Tesekkurler.\n");
	printf("[1]Toplama\n");
	printf("[2]Cikarma\n");
	printf("[3]Bolme\n");
	printf("[4]Carpma\n");
	printf("Peki bu iki sayiyla hangi islemi yapmak istiyorsunuz?\n");
	scanf ("%d",&secim);
	toplam=x+y;
	cikarma=x-y;
	carpma=x*y;
	a=float(x);
	b=float (y);
	bolum=a/b;
	switch (secim){
		case 1: 
			printf("Toplam= %d\n",toplam);
			break;
		case 2:
			printf("Cikarma= %d\n",cikarma);
			break;
		case 3:
			printf("Bolme= %f\n",bolum);
			break;
		case 4:
			printf("Carpma= %d\n",carpma);
			break;
		default:printf("Yanlis secim yaptiniz! ");
			break;
	}
	

}
