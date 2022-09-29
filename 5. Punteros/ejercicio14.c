// 14. Explica el funcionamiento del siguiente programa:

#include<stdio.h>
int main( ) {
	
	int a , *p ;			// declaro una variable y un puntero del tipo entero
	a = 5 ;					// a toma el valor 5
	p = &a ;				// la direccion de p toma la direccion de a
	*p += 7 ;				// el valor del puntero p suma 7 al 5 que se encontraba en a
	
	printf ( " \n El valor final de a es : %d \n " , a ) ;
	
	return 0 ;

}

