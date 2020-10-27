#include <stdio.h>
int main()
{
	int numero;
	printf("Inserta un numero.\n");
	scanf("%d",&numero);
	printf("Te dira si es un numero impar o par.\n");
	 if(numero%2==0)
        {
        	printf("\nTienes un numero par %d.",numero);
		}
	if(numero%2!=0)
        {
        	printf("\nTienes un numero impar %d.",numero);
		}
return 0;
}
