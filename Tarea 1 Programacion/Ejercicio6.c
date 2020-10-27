#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float a,b,div;
	printf("\n Este programa lee dos valores y que realiza la division.\n");
	printf("\n Ingresa un primer numero.");
	scanf("%f",&a);
	printf("\n Ingresa un segundo numero.");
	scanf("%f",&b);
	if(b<=0)
	{
		printf("\n No se puede realizar esta division.");
	}
	else 
	{
		div=a/b;
		printf("\n El resultado de la division es %.2f",div);
	}
return 0;
}
