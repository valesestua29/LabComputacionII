/* Desarrolla un algoritmo que permita calcular el área de un triángulo en función de las longitudes 
de sus lados previamente leídos desde el teclado */

#include<stdio.h>
#include<math.h>

int main(){
	
	float ladoA, ladoB, ladoC, area, perim;
	
	printf("Ingrese el valor del lado A \n");
	scanf("%f", &ladoA);
	printf("\nIngrese el valor del lado B \n");
	scanf("%f", &ladoB);
	printf("\nIngrese el valor del lado C \n");
	scanf("%f", &ladoC);
	
	perim = (ladoA + ladoB + ladoC)/2;
	area = sqrt(perim*(perim-ladoA)*(perim-ladoB)*(perim-ladoC));
	
	printf ("\n\nEl area del triangulo es igual a %.2f",area);
	
	return 0;
}
