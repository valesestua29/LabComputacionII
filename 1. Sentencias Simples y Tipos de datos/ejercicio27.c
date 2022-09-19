/* Desarrolla un algoritmo que permita leer un valor que represente una temperatura expresada en grados Celcius y
convierta dicho valor en un valor expresado en grados Fahrenheit. */

#include<stdio.h>
#include<math.h>

int main() {
	
	float tempC, tempF;
	
	printf("Ingrese la temperatura expresada en grados Celcius: ");
	scanf("%f", &tempC);
	
	tempF= (tempC*9/5)+32;
	
	printf("\n\n%.2f grados Celcius es equivalente a %.2f grados Fahrenheit\n\n", tempC, tempF);
	
	return 0;
}
