#include <stdio.h> 
main(){
int i,son,t=0;
printf("Kaca kadar toplansin? ");
scanf("%d",&son);
for(i=1;i<=son;i++) {
	t=t+i*i;
	printf("Toplam=%d\n",t);
}

//Ýç içe for döngüsü
int x,y;
for(x=1;x<=3;x++)
	for(y=1;y<=4;y++){
		printf("x=%d y=%d\n",x,y);
}
}
