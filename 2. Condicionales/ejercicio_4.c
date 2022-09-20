/* Desarrolla un algoritmo que le permita leer 2 valores A y B e indicar si uno de los dos divide al
otro exactamente. Análisis: Para dar solución al anterior ejercicio, primero se deben leer los dos valores y
almacenar cada uno de ellos en una variable. Para el caso del desarrollo se almacenará un valor en la
variable A y el otro en la variable B. Para saber si uno de los dos divide exactamente al otro se examina
primero el caso en que B divida exactamente a A; se compara el residuo, si es cero se escribirá que divide
exactamente a A de lo contrario se examina el caso en que A divida exactamente a B. Se compara nuevamente el
residuo, si es cero se escribirá "A divide exactamente a B" sino "ninguno de los dos divide exactamente al
otro". Se supone que los dos valores leídos son diferentes. */

#include<stdio.h>
int main() {
	
	int num1, num2;
	
	printf("Ingrese el primer valor: ");
	scanf("%i",&num1);
	printf("\n\nIngrese el segundo valor: ");
	scanf("%i",&num2);
	
	if(num1%num2==0){
		printf("\n\n %i es divisible por %i ", num1, num2);
	}
	else if (num2%num1==0){
		printf("\n\n %i es divisible por %i ", num2, num1);
	}
	else {
		printf("\n\n Ninguno de los valores ingresados divide al otro ");
	}
	
	
	
	return 0; 
}
