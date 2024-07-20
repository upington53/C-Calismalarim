#include <stdio.h>

main() {
	int vize, final;
	float ortalama;
	printf("Ortalama Hesaplamaya HG gardas \n");
	printf("Lutfen vize notunuzu giriniz: \n");
	scanf("%d", &vize);
	printf("Lutfen final notunu gir: \n");
	scanf("%d", &final);
	ortalama= ((40*vize)+(60*final))/100;
	printf(" %.3f",ortalama);
}
