/*Construye un programa que dados el costo de 1 kg de determinado producto y la cantidad comprada, emita el valor del total a pagar*/

#include<stdio.h>
int main () {
	
	float cantComprada, valorTotal, producto;
	
	const float cant = 1000 ;
	
	printf ("El precio de 1kg de producto es: ");
	scanf ("%f", &producto);
	
	printf ("\nCantidad a comprar del producto en gramos:  ");
	scanf ("%f", &cantComprada);
	
	valorTotal = ( cantComprada * producto ) / cant ;
	
	printf ("\nEl valor total a pagar es %.2f $", valorTotal);
	
	
	
	return 0;
}
