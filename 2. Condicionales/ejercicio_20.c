/* Se lee un n�mero entero correspondiente a un a�o, y se muestra un mensaje indicando si es a�o
bisiesto. */

#include<stdio.h>
int main(){
	
	int anio;
	printf("Ingrese un a%co: \n",164);
	scanf("%i",&anio);
	
	if ((anio%4==0) && (anio%100!=0)) {
		
		printf("Es un a%co bisiesto\n",164);
		
	} else {
		
		if ((anio%100==0) && (anio%400==0)) {
			
			printf("Es un a%co bisiesto\n",164);
		} else {
			
			printf("No es un a%co bisiesto\n",164);
		}
	}
	
	return 0;
	
}
