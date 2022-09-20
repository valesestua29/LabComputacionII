/* Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es
múltiplo de Z. */

#include<stdio.h>
int main(){
	
	int num1, num2;
	printf ("Ingrese dos numeros cualesquiera: ");
	scanf("%i" "%i",&num1, &num2);
	
	if((num1%num2==0)){
		printf("\n\n%i es multiplo de %i", num1, num2);
	}
	else{
		printf("\n\nLos valores ingresados no son multiplos");
	}
	
	return 0;
}
