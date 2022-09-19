/* Desarrolla un algoritmo que le permita leer un valor radio (R), calcular el área (A) de un círculo y emitir valor. */
#include<stdio.h>
#include<math.h>

int main() {
	
	float radio, area;
	const float pi = 3.1416;
	
	printf ("Ingrese el valor del radio: ");
	scanf ("%f",&radio);
	
	area = pi * pow(radio,2);
	
	printf ("\n\nEl area del circulo es %.2f", area);
	return 0;
}
