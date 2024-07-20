#include <stdio.h>
#include <conio.h>
main()
{
	/*Ekrana yan yana 5 tane * yazdýran program*/

	/*int x=1,;
	do {
		printf("*");
		i++;
	}while(<=5);*/
	
	
	/*Program 1 sefer çalýþtýktan sonra devam için E ya da e harfine basýlýnca tekrar çalýþan;
	baþka bir harfe basýnca duran uygulama*/	
	
	int a;
	float puan, toplam;
	char cevap;
	
	a=1;
	toplam=0;
	do{
		printf("\n%d. puan: ",a);
		scanf("%f",&puan);
		toplam=toplam+puan;
		a++;
		printf("\nDevam mi knk? (E/H))\n");
		cevap=getch();
	} while(cevap=='E'||cevap=='e');
	printf("%d kisinin not ortalamasi= %.3f 'tir.",(a-1),toplam/(a-1));		
}
