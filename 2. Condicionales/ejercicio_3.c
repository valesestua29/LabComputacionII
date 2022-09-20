/*Ingresa dos números enteros, la computadora indica si el mayor es divisible por el menor.*/

#include<stdio.h>
int main(){
	
	int num1, num2, mayor, menor;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	
	if(num1>num2){
		
		mayor=num1;
		menor=num2;
	
	}	
	else {
		
		mayor=num2;
		menor=num1;
	}
	
	
	if(mayor%menor==0){
		
		printf("\n\n %i es divisible por %i ", mayor, menor);
	}
	else {
		
		printf("\n\n %i no es divisible por %i", mayor, menor);
	}
	
	
	return 0;
}

