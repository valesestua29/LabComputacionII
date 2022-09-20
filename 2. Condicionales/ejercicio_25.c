/*Desarrolla un algoritmo que le permita leer tres valores A,B y C e indicar si la suma de dos
números cualquiera es igual al tercero.*/

#include<stdio.h>
int main(){
	
	int num1, num2, num3;
	printf ("Ingrese tres numeros cualesquiera: ");
	scanf("%i" "%i" "%i",&num1, &num2,&num3);
	
	if ((num1+num2==num3)){
		printf("La suma de los dos primeros numeros ingresados es igual al tercer numero %i+%i=%i ", num1,num2,num3);
	}
	
	else {
		printf("La suma de los dos primeros numeros ingresados no es igual al tercer numero %i+%i!=%i ", num1,num2,num3);
	}
	
	return 0;
}
