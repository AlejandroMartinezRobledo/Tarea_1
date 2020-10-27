#include <stdio.h>
#include <math.h>
#include <conio.h>

float res1, res2, res3, res4, res5;

int a, b, c;

int main()
{
	printf("Resolviendo la formula general\n");
	
	printf("Introduce el valor de la variable a: \n");
	scanf("%d", &a);
	printf("Introduce el valor de la variable b:\n");
	scanf("%d", &b);
	printf("Introduce el valor de la variable c:\n");
	scanf("%d", &c);
	if (a!=0)
	{
		res3=pow(b,2);
		res4=(4*a*c);
		res5=(res3-res4);
		if(res5<0)
		{
			printf("No existen raices negativas");
		}
	if (res5>=0)
	{
		res1=((-b+(sqrt(res5)))/(2*a));
		res2=((-b-(sqrt(res5)))/(2*a));
		if(res1==res2)
		{
			printf("El resultado es el mismo para x1 y x2: %f", res1);
		}
		if (res1!=res2)
		{
			printf("El resultado de x1 es: %f", res1);
			printf("El resultado de x2 es: %f", res2);
		}
	}
	}
	if(a==0)
	{
		printf("no es posible realizar esta operacion");
	}
	
}
