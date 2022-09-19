/* Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante, emitir por pantalla su equivalencia en pies
(enteros) y en pulgadas (flotante, con 1 decimal) */

#include<stdio.h>

int main () {
	
	
	float centim, pulgadas ;
	int pies;	
	
	printf ("Ingrese una medida en centimetros \n");
	scanf ("%f", &centim);
	
	
	pulgadas = centim / 2.54 ;
	
	pies = centim / 30.48 ;
	
	
	printf ("La equivalencia a %.2f cm en pulgadas es %.1f \n", centim, pulgadas);
	printf ("La equivalencia a %.2f cm en pies es %i \n", centim, pies);
	
	return 0;
	
}
