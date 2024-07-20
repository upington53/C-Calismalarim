#include <stdio.h>
main()
{
	int odev1,odev2,odev3,vize,final;
	float vizeort, finalort, genelort;
	vizeort=0.0;
	finalort=0.0;
	genelort=0.0;
	printf("Vize notunuzu giriniz:");
	scanf("%d",&vize);
	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	printf("Odevleri sirasiyla bosluk birakarak giriniz:");
	scanf("%d %d %d", &odev1,&odev2,&odev3);
	vizeort=(vize*0.9)+(odev1*0.1);
	finalort=(final*0.8)+(odev2*0.1)+(odev3*0.1);
	genelort=(vizeort*0.4)+(finalort*0.6);
	printf("Genel ortalamaniz= %0.1f",genelort);
}
