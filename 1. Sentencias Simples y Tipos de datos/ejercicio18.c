/*Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo, y se emita por pantalla el valor del
restante*/

#include<stdio.h>
int main(){
	
	float ang1, ang2, ang3;
	
	printf("Ingrese el valor del 1er angulo: ");
	scanf("%f",&ang1);
	printf("\nIngrese el valor del 2do angulo: ");
	scanf("%f",&ang2);
	
	ang3 = 180 - (ang1 + ang2);
	
	printf("\n\nEl valor del 3er angulo es %.2f", ang3);
	
	
	return 0;
	
}
