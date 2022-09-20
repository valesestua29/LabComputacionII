/* Dados 3 números, mostrarlos por pantalla en orden creciente */

#include<stdio.h>
int main(){
	
	int a, b, c;
	printf("Ingrese 3 numeros enteros: ");
	scanf("%i" "%i" "%i", &a,&b, &c);
	
	if(a<b && a<c && b<c){
		printf("\n\nEl orden es: %i,%i,%i", a,b,c);
	}
	else if(a<b && a<c && c<b){
		printf("\n\nEl orden es: %i,%i,%i", a,c,b);
	}
	else if(b<a && b<c && c<b){
		printf("\n\nEl orden es: %i,%i,%i", c,a,b);
	}
	else if( b<a && b<c && c<a){
		printf("\n\nEl orden es: %i,%i,%i", b,c,a);
	}
	else if( c<a && c<b && a<c){
		printf("\n\nEl orden es: %i,%i,%i", b,c,a);
	}
	else if(c<a && c<b && b<c){
		printf("\n\nEl orden es: %i,%i,%i",c,b,a);
	}
	else{
		printf("Error");
	}
	
	return 0;
}
