/* Construye un programa que ingrese los valores de los lados de un tri�ngulo:
	a. Valide si las medidas pueden formar un tri�ngulo.
	b. Detecte y muestre un mensaje correspondiente a su tipo (EQUIL�TERO, IS�SCELES, O ESCALENO); */
	
#include<stdio.h>
int main(){
	
	int lado1, lado2, lado3;
	
	printf("Ingrese los valores: ");
	scanf("%i" "%i ""%i",&lado1,&lado2,&lado3);
	
	if(((lado1+lado2)>lado3)||((lado1+lado3)>lado2)||((lado2+lado3)>lado1)){
		
		if((lado1!=lado2)&&(lado2!=lado3)&&(lado3!=lado1)){
			printf("\n\nEs un triangulo Escaleno");
		}
		else if((lado1==lado2)&&(lado1==lado3)&&(lado2==lado3)){
			printf("\n\nEs un triangulo Equilatero");
		}
		else{
			printf("\n\nEs un triangulo Isosceles");
		}
	}
	else {
		printf("\n\nLos valores ingresados no forman un triangulo");
	}
	
	return 0;
}
