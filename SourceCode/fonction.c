#include <stdio.h>

int add (int a,int b)
{
	return (a + b); 
}

int subtract (int a,int b)
{
	return (a - b);
}

int multiply (int a,int b)
{
	return (a * b );
}

int devide (int a,int b)
{
	if (b)
		return (a/b);
	else 
		printf(" We can not devide  \n");
}