#include <stdio.h>
main(){
	//Girilecek 3 sayiyiyi siralama
	int sayi1,sayi2,sayi3;
	printf("Sayi siralama uygulamamiza hos geldiniz");
	printf("\nOncelikle ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Simdi ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("Son olarak ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3) {
		if (sayi2>sayi3){
			printf("%d > %d > %d",sayi1,sayi2,sayi3); }
		else {
			printf("%d > %d > %d",sayi1,sayi3,sayi2);
			}
}
	else if (sayi2>sayi3 && sayi2>sayi1)
	 {
	 	if (sayi3>sayi1){printf("%d > %d > %d",sayi2,sayi3,sayi1);
		 }
		else {printf("%d > %d > %d",sayi2,sayi1,sayi3);
		}
}
	else if (sayi3>sayi2 && sayi3>sayi1) {
		if (sayi2>sayi1) {
			printf("%d > %d > %d",sayi3,sayi2,sayi1);
		}
		else {
			printf("%d > %d > %d",sayi3,sayi1,sayi2);
		}
	}
	 }

