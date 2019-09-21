#include <stdio.h>
#include <fonction.h>

int main()
{
	int a = 10 ;
	int b = 20 ;
	
	printf("%d + %d = %d \n",a,b,add(a,b) );
	printf("%d - %d = %d \n",a,b,subtract(a,b) );
	printf("%d * %d = %d \n",a,b,multiply(a,b) );
	printf("%d / %d = %d \n",a,b,devide(a,b) );
	
	return 0;

}