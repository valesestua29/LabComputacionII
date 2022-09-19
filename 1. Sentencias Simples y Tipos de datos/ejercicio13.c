/* Desarrolla un algoritmo que permita leer por teclado 2 valores y emitir por pantalla: la suma de los dos, la resta, producto, división, promedio */

#include<stdio.h>
int main () {
	
	int num1, num2, suma, resta, mult ;
	float div, prom;
	
	printf ("Ingrese dos valores numericos\n\n");
	scanf ("%i""%i", &num1, &num2);
	
	suma = num1 + num2;
	resta = num1 - num2;
	mult = num1 * num2 ;
	div = num1 / num2 ;
	
	prom = suma / 2;

	printf ("La suma de los nros ingresados es %i \n", suma);
	printf ("La resta de  los nros ingresados es %i \n", resta);
	printf ("La mult de los nros ingresados es %i \n", mult);
	printf ("La division de los nros ingresados es %.2f \n" , div);
	printf ("El promedio de los nros ingresados es %.2f \n", prom);

	
	return 0;
}
