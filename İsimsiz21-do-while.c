#include <stdio.h>
#include <conio.h>
main()
{
	/*Ekrana yan yana 5 tane * yazd�ran program*/

	/*int x=1,;
	do {
		printf("*");
		i++;
	}while(<=5);*/
	
	
	/*Program 1 sefer �al��t�ktan sonra devam i�in E ya da e harfine bas�l�nca tekrar �al��an;
	ba�ka bir harfe bas�nca duran uygulama*/	
	
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
