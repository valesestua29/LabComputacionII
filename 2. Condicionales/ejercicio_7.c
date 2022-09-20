/* Ingresados dos números reales, la computadora muestra su cociente. Si el segundo número es cero, la
computadora muestra un mensaje indicando la imposibilidad de la operación.  */

#include<stdio.h>
int main(){
	
	float num1, num2, result;
	
	printf("Ingrese el valor de dos numeros: ");
	scanf("%f" "%f",&num1, &num2);
	
	
	if(num2==0){
		printf("\n\nNo se puede realizar la operacion");
	}
	else {
		
		result=num1/num2;
		printf("\n\nEl resultado de %.1f / %.1f = %.2f ", num1,num2,result);
	}
		
	return 0;
}
