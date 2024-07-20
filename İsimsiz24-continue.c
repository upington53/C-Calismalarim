#include <stdio.h>
main()
{
int i=0;
while(i<100){
	i++;
	if(i%2==0)continue;{ //buradaki continue komutundan dolayý aþaðýda else yazamadýk	
	printf("%d\n",i);}
}
	
}
