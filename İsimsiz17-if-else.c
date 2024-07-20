#include <stdio.h>
main()
{
	int sayi;
	printf("Lutfen vize notunuzu giriniz: ");
	scanf("%d",&sayi);
	if(sayi<35){
		printf("Dersi finalde gecmeniz lazim, risk altindasiniz\n");
	} 
	else {
		printf("Risk altinda degilsiniz ama finalde iyi bir not almaniz lazim.");
	}
	
	
}
