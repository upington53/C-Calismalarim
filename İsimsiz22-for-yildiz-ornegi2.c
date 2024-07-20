#include <stdio.h>
main()
{
	int a,b,taban,yukseklik;
	printf("Lutfen yildizin taban yildizini giriniz: ");
	scanf("%d",&taban);
	printf("Lutfen yildizin yuksekligini giriniz: ");
	scanf("%d",&yukseklik);
	
	for (a=0; a<yukseklik; a++) {
		for (b=0 ; b<taban ; b++) {
			printf ("*");
		}printf("\n");
	}
	
	
	int k,l,m;
	printf("Kac tabanli bir dik ucgen istiyorsunuz? :");
	scanf("%d",&l);
	for (k=1; k<l+1; k++) {
		for (m=0; m<k; m++) {
			printf("*");
			
		}
		printf("\n");
	}
	for (k=l; k>0; k--){
		for (m=1; k>m; m++) {
			printf("*");
		}printf("\n");
	}
	printf("\n\nAsil ucgene geciyoruz\n");
	 for (k=1; k<=l ; k++) {
        for (m = 1; m <= l-k; m++) {
            printf(" ");
        }
        for (m = 1; m <= 2 * k-1; m++) {
            printf("*");
        }
        printf("\n");
    }
}

