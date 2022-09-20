/* Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir en la pantalla si dicho
número es Positivo, Negativo o 0 (cero).*/

#include<stdio.h>
int main(){
	
	int num;
	
	printf("Ingrese un numero: ");
	scanf("%i",&num);
	
	if(num<0){
		
		printf("\n\nEl numero ingresado es Negativo");	
	}
	else if (num>0){

		printf("\n\nEl numero ingresado es Positivo");
	}
	else{
		printf("\n\nEl numero ingresado es cero");
	}
	
	return 0;
	
}
