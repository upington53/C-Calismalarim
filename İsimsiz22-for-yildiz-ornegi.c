#include <stdio.h> 
main()
{
	//*
	//**
	//***
	//****
	//*****
	//****
	//***
	//**
	//*
	
	//Bunu yazdýracak komutu yazalým
	int satir,yildiz,adet,bosluk;
	
 	printf("Kac satir yildiz cizmek istersiniz? ");
    	scanf("%d", &adet);
    	for (int satir = 1; satir <= adet; satir++) {				
        	for (int yildiz = 1; yildiz <= satir; yildiz++) {
            	printf("*");        
        }								
        printf(" \n");
		}
		for (satir =1 ; satir<=adet ; satir++){
			for (yildiz= adet-1 ; yildiz>=satir ; yildiz--) {
				printf("*");
			}
			printf("\n");
		}
		/*
		    *
		   ***
		  *****
		 *******
		  *****
		   ***
		    *
		*/
		printf("\n\n\n");
		
		for (satir=1 ;satir<=adet ; satir++){
			for (bosluk= adet-1; bosluk>=satir; bosluk--) {
				printf(" ");
			}
			for(yildiz=1; yildiz <= 2*satir-1; yildiz++){
				printf("*");
			}
			printf("\n");
		}
		for(satir=adet-1 ; satir>=0; satir--){
			for(bosluk=1; bosluk<=adet-satir; bosluk++){
				printf(" ");
			}
			for(yildiz=1; yildiz<=2*satir-1; yildiz++) {
				printf("*");
			}
			printf("\n");
		}
		
		
}

