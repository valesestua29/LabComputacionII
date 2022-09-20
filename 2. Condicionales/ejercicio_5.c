/* Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es par o
impar. */

#include<stdio.h>
int main() {
	
	int num1;
	
	printf("Ingrese un valor: ");
	scanf("%i",&num1);
	
	if(num1%2==0){
		printf("\n\n %i es un numero par ", num1);
	}
	else {
		printf("\n\n %i es un numero impar ", num1);
	}
	
	
	return 0;
}

