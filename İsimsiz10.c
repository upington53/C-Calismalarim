#include <stdio.h>
main(){
	int sayi;
	int faktoriyel=1;
	int i=1;
	printf("Lutfen faktoriyeli hesaplanacak sayiyi giriniz: ");
	scanf("%d",&sayi);

	while(i<sayi) {
		faktoriyel=faktoriyel*i;
		i++;
		
	}
	printf("Girmis oldugunuz sayinin faktoriyeli= %d",faktoriyel); 
}

