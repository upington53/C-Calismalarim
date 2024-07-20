#include <stdio.h>
main()
{
	int i=0;
	int *ptr = &i;
	printf("Bellek: %d\n",ptr);
	printf("Bellek: %d\n",&i);
	printf("%d\n",i);
	
	int *b;
	b=&i;
	printf("%d\n",b);
	
	int sayi1=460, sayi2=461, sayi3=1000;
	printf("\nBellekleri: %d\n",sayi1); //Sayýnýn normal hali
	printf("Bellekleri: %d\n",&sayi1); //Sayýnýn bellekteki hali
	printf("Bellekleri: %x\n",sayi1); //Sayýnýn hexadecimal hali
	printf("Bellekleri: %x\n",&sayi1);//Sayýnýn bellekteki hexadecimal hali
}



