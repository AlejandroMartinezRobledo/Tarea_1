#include <stdio.h>

int main()


{
	int a,b;
	printf("Introduce el valor de la variable a:");
	scanf("%d",&a);
	printf("Introduce el valor de la variable b:");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("\nEl valor %d es menor que %d",a,b);
	}
	if(a>b)
	{
		printf("\nEl valor %d es mayor que %d",a,b);
	}
	if(a==b)
	{
		printf("\nLos valores son iguales");
	}

}
