#include <stdio.h>
main()
{
int i=0;
while(i<100){
	i++;
	if(i%2==0)continue;{ //buradaki continue komutundan dolay� a�a��da else yazamad�k	
	printf("%d\n",i);}
}
	
}
