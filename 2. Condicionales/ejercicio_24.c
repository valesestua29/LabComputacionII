/* Desarrolla un algoritmo que le permita leer un valor cualquiera N y escribir si dicho número es
común múltiplo de M y P */


#include<stdio.h>
int main(){
	
	int num1, num2, num3;
	printf ("Ingrese tres numeros cualesquiera: ");
	scanf("%i" "%i" "%i",&num1, &num2,&num3);
	
	if((num1%num2==0)&&(num1%num3==0)){
		printf("\n\n%i es multiplo de %i y %i", num1, num2, num3);
	}
	else if((num1%num2==0)&&(num1%num3!=0)){
		printf("\n\n%i es solo multiplo por %i",num1,num2);
	}
	else if((num1%num3==0)&&(num1%num2!=0)){
		printf("\n\n%i es solo multiplo por %i",num1,num3);
	}
	else {
		printf("\n\n%i no es multiplo de ninguno de los otros dos valores ingresados",num1);
	}
	
	return 0;
}
