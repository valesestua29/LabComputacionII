/* Desarrolla un algoritmo que le permita leer tres valores y almacenarlos en las variables A, B y C
respectivamente. El algoritmo debe indicar cuál es el mayor. Para este caso se asume que los tres valores
leídos por el teclado son valores distintos. Análisis: Es necesario leer los tres valores a comparar, cada
uno de ellos se almacena en una variable que para el ejercicio será A, B y C. Para saber si A es el valor
mayor se compara con las variables B y C respectivamente. En caso de ser mayor se escribe el mensaje, en
caso contrario se sigue verificando otra variable caso B y si no por defecto se dirá que C es el mayor
asumiendo que los tres valores almacenados son diferentes. */

#include<stdio.h>
int main(){
	
	int num1, num2, num3;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	printf("\n\nIngrese el tercer valor: ");
	scanf("%i",&num3);
	
	if (num1>num2 && num1>num3){
		printf("\n\n %i es el mayor valor ingresado",num1);
	}
	else if (num2>num1 && num2>num3){
		printf("\n\n %i es el mayor valor ingresado",num2);
	}
	else {
		printf("\n\n %i es el mayor valor ingresado",num3);
	}
	
	return 0;
}

