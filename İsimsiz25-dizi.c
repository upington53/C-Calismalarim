#include <stdio.h>
#include <stdlib.h>
main()
{

	int sayilar; //normal de�i�ken
	int rakamlar[]={0,1,2,3}; //dizi
	//Index, dizilerdeki eleman say�s�d�r ve ba�lang�� de�er 0'd�r.
	//printf("%d\n",rakamlar); bu komut yaz�nca sa�mal�yor, de�i�ik
	printf("%d\n",rakamlar[0]);
	printf("%d\n",rakamlar[1]);
	printf("%d\n",rakamlar[2]);
	printf("%d\n",rakamlar[3]);
	
	char isim[]={'u','l','a','s'};
	printf("%s\n",isim); //burada ad�m� direkt yazd�
	char sehir[2]={'r','i','z','e'}; //burada ise ilk 2 de�erini getirdi
	printf("%s\n",sehir);
}
