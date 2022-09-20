/* Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos números
es par. Análisis: Primero se leen los dos datos almacenando cada uno de ellos en un variable, en el caso del
ejercicio el primer valor se almacena en la variable A y el segundo se almacena en la variable B. Al
sumarlos para saber si el resultado es par o impar se divide entre dos chequeando el residuo. Si el residuo
es cero es porque el valor es par y si el residuo es uno es porque el valor es impar. */

#include<stdio.h>
int main(){
	
	int num1, num2, suma;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	
	suma = num1 + num2;
	
	if(suma%2==0){
		printf("\n\nLa suma de %i+%i=%i por lo tanto Par", num1,num2,suma);
	}
	else{
		printf("\n\nLa suma de %i+%i=%i por lo tanto Impar", num1,num2,suma);
	}
	
	return 0;
}
