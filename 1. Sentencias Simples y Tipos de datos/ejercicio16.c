/* Construye un programa que pregunte los a�os que tienes y emita como respuesta el n�mero de d�as (s�lo en a�os). */

#include<stdio.h>
int main () {
	
	int edad, dias;
	
	printf ("Ingrese su edad \n");
	scanf ("%i",&edad);
	
	
	dias = edad * 360;
	
	printf ("\n\n Usted tiene %i dias de edad ", dias);
	
	
	return 0;
}
