#include <stdio.h>
//main()
//{

	/*1'den kullanýcýnýn girdiði tam sayýya kadar tek ve çift sayýlarý
	ayrý ayrý toplama uygulamasý*/
/*
	int x=1,son,toplamc=0,toplamt=0;
	printf("Hangi sayiya kadar toplanmasini istiyorsunuz? \n");
	scanf("%d",&son);
	printf("Toplama islemleri yapiliyor..\n");
	
	while (x<=son) {
		if(x%2==0) {
			toplamc=toplamc+x;
		}
		else {
			toplamt=toplamt+x;
		}
		x++;
		
	}
	printf("Cift sayilarin toplama islemi= %d\n",toplamc);
	printf("Tek sayilarin toplama islemi= %d\n",toplamt);
	
	*/
//}
#include<stdlib.h>

int main()
{
 int i=3;
 
 while(i<=50) {

  if(i%3==0 && i!=30) {
   printf(" %d \n",i);
  }

  
 } 
 
 return 0;
 
}
