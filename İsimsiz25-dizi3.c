#include <stdio.h>
main()
{
	char sehir[3][15];
	int i;
		for (i=0;i<3;i++) {
		printf("Sehri giriniz: ");
		scanf("%s",&sehir[i]);	
		}
		printf("\nGirdiginiz sehirler:\n");
		for (i=0;i<3;i++) {
		printf("%s\n",sehir[i]);
		}
}

