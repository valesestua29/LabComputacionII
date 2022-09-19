/*Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el mismo debe emitir por pantalla su superficie y
superímetro.*/

#include<stdio.h>
int main(){
	
	float altura, base, perim, sup;
	
	printf ("Ingrese el valor de la altura del rectangulo: ");
	scanf("%f",&altura);
	printf("\n\nIngrese el valor de la base del rectangulo: ");
	scanf("%f", &base);
	
	sup = base * altura;
	perim = 2 * base * altura;
	
	printf("\n\nLa superficie es %.2f", sup);
	printf("\n\nEl perimetro es %.2f", perim);
	
	
	return 0;
}
