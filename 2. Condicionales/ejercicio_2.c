/*  Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cuál de los dos valores
leídos es el mayor. Análisis: primero se deben leer los dos valores y almacenar cada uno de ellos en una
variable. Para el caso del desarrollo se almacenará un valor en la variable A y el otro en la variable B.
Para poder saber cuál de los dos valores es mayor simplemente se comparan las dos variables y se escribirá
cuál de las dos es la mayor. Se supone que los dos valores leídos son diferentes. */

#include<stdio.h>
int main(){
	
	int num1, num2;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	
	if(num1>num2){
		
		printf ("\n\n %i es mayor que %i ", num1,num2);
	}
	else {
		
		printf("\n\n %i es mayor que %i ", num2,num1);
	}
	

	return 0;
}





