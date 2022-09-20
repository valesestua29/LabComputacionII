/* Ingresados tres caracteres, la computadora los muestra ordenados alfabéticamente */

#include<stdio.h>
int main(){
	
	char c1, c2, c3;
	
	printf("Ingrese el primer caracter: ");
	scanf("%c", &c1);
	
	printf("\n\nIngrese el segundo caracter: ");
	scanf("%c", &c2);
//	printf("\n\nIngrese el tercer caracter: ");
//	scanf("%c",&c3);
	
	if((c1>c2 && c1>c3) && (c2>c3)){
		printf("\n\nEl orden es %c > %c > %c ",c1,c2,c3);
		
	}
	
	
	
	return 0;
}
