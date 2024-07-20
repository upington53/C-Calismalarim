#include <stdio.h>
main()
{
	int sayi;
	printf("Lutfen vize notunuzu giriniz: ");
	scanf("%d",&sayi);
	if(sayi<35){
		printf("Dersi finalde gecmeniz lazim, risk altindasiniz\n\n");
	} 
	else {
		printf("Risk altinda degilsiniz ama finalde iyi bir not almaniz lazim.\n\n");
	}
	switch (sayi) {
		/*case sayi<35: printf("Finale cok calýsýp 60'tan bile yuksek almaniz lazim'");
		case 70>sayi>35: printf("Finale calýsýp riske atmamaniz lazim");
		case sayi>70: printf("Cok iyi, ama yine de finale goz atiniz");*/
		case 30: printf("Finale asiri calisman lazim");
		break;
		case 50: printf("Idare eder ama finale calis");
		break;
		case 70: printf("Gayet iyi ama final onemli");
		break;
		case 100: printf("Helal lan ama finale calis ort dusmesin");
		break;
		default: printf("30,50,70 ya da 100 sayilarindan birisini giriniz");
		break;
	}
}
