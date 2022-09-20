/* Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres divide
a los otros dos exactamente. Análisis: Leídos los tres valores y almacenados en cada una de las variables A,
B y C respectivamente se procede a verificar si cada uno de ellos divide exactamente a los otros dos. La
división es exacta si el residuo de la división respectiva es igual a cero. */

#include<stdio.h>
int main(){
	
	int num1, num2, num3;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num3);
	
	if((num2%num1==0) && (num3%num1==0)){
		printf("\n\n %i y %i son divisibles por %i ", num2,num3,num1);
	}
	else if((num1%num2==0)&&(num3%num2==0)){
		printf("\n\n %i y %i son divisibles por %i ",num1,num3,num2);
	}
	else if((num1%num3==0)&&(num2%num3==0)){
		printf("\n\n %i y %i son divisibles por %i ",num1,num2,num3);
	}
	else {
		printf("\n\n %i, %i, %i no son divisibles entre si ", num1, num2, num3);
	}
	
	
	return 0;
}

