//Desarrolla un algoritmo que le permita leer un valor para radio (R), 
// calcular el área (A) de un círculo y emitir su valor. 

#include<stdio.h>
#include<math.h>

int main(){
	
	float pi=3.1416;
	
	float  radio, area, *r,*a;	
		
	printf("Ingrese un valor: ");
	scanf("%f",&radio);
	
	r=&radio;
	
	area=pi*pow(*r,2);
	
	a=&area;

	printf("\n\nEl valor del area es %.2f",*a);
	
	
	return 0;
}
