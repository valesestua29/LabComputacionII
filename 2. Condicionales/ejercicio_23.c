/* Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho n?mero es
com?n divisor de otros dos valores le?dos W y Z. */

#include<stdio.h>
int main(){
	
	int num1, num2, num3;
	printf ("Ingrese tres numeros cualesquiera: ");
	scanf("%i" "%i" "%i",&num1, &num2,&num3);
	
	if((num1%num2==0)&&(num1%num3==0)){
		printf("\n\n%i es divisible por %i y %i", num1, num2, num3);
	}
	else if((num1%num2==0)&&(num1%num3!=0)){
		printf("\n\n%i es solo divisible por %i",num1,num2);
	}
	else if((num1%num3==0)&&(num1%num2!=0)){
		printf("\n\n%i es solo divisible por %i",num1,num3);
	}
	else {
		printf("\n\n%i no es divisible por ninguno de los otros dos valores ingresados",num1);
	}
	
	return 0;
}
