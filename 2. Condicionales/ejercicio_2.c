/*  Desarrolla un algoritmo que le permita leer dos valores (A y B) y que escriba cu�l de los dos valores
le�dos es el mayor. An�lisis: primero se deben leer los dos valores y almacenar cada uno de ellos en una
variable. Para el caso del desarrollo se almacenar� un valor en la variable A y el otro en la variable B.
Para poder saber cu�l de los dos valores es mayor simplemente se comparan las dos variables y se escribir�
cu�l de las dos es la mayor. Se supone que los dos valores le�dos son diferentes. */

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





