#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	printf("\n Programa que calcula el area y perimetro de un circulo. \n");
	float radio,per,area;
	printf("\n Inserta el radio del circulo:");
	scanf("%f",&radio);
	per=(2*3.1416*radio);
	area=(3.1416*radio*radio);
	printf("\n El perimetro es: %.4f.\n", per);
	printf("\n El area es %.4f. \n",area);
return 0;
	
}
