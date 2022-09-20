/* Ingresados 3 números enteros, la computadora indica si están desordenados u ordenados en forma
creciente o decreciente. */

#include<stdio.h>
int main() {
	
	int num1, num2, num3;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	printf("\n\nIngrese el tercer valor: ");
	scanf("%i",&num3);
	
	if ((num1>num2 && num1>num3) && (num2>num3)){
		
		printf ("\n\n %i %i %i estan ordenados de forma decreciente",num1,num2,num3);
		
	}
	else if ((num1<num2 && num1<num3)&&(num2<num3)){
		
		printf ("\n\n %i %i %i estan ordenados de forma creciente ", num1,num2,num3);
	}
	else {
		printf("\n\nLos numeros ingresados estan desordenados");
	}
	
	return 0;
}


