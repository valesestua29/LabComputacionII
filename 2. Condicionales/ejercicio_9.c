/* Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cual es valor del centro.
Análisis: Una vez leídos los valores en cada uno de los indicadores (variables A,B,C) se procede a comparar
cada uno de ellos con los otros dos para verificar si es valor del centro o no. Un valor es del centro si es
menor que uno y mayor que otro o el caso contrario. Igualmente se asume que los tres valores leídos son
diferentes. */

#include<stdio.h>
int main(){
	
	int num1, num2, num3;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	printf("\n\nIngrese el tercer valor: ");
	scanf("%i",&num3);
	
	
	if((num1>num2 && num1<num3)||(num1>num3 && num1<num2)) {
		printf("\n\n %i es el valor del centro ", num1);
	}
	else if ((num2<num1 && num2>num3)||(num2<num3 && num2>num1)){
		printf("\n\n %i es el valor del centro ", num2);
	}
	else if ((num3>num1 && num3<num2)||(num3>num1 && num3<num2)){
		printf("\n\n %i es el valor del centro ", num3);
	}
	else {
		
	}
	
	
	
	return 0;
}



