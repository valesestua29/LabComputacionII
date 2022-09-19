/* Construye un programa que pregunte los años que tienes y emita como respuesta el número de días (sólo en años). */

#include<stdio.h>
int main () {
	
	int edad, dias;
	
	printf ("Ingrese su edad \n");
	scanf ("%i",&edad);
	
	
	dias = edad * 360;
	
	printf ("\n\n Usted tiene %i dias de edad ", dias);
	
	
	return 0;
}
