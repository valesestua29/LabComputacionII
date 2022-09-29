//12 . Investiga qué emite por pantalla el siguiente programa

#include<stdio.h>

int main(){
	
	int n=8, *ptr;
	printf( "ptres %d \n",ptr);			
	ptr=&n;									// la direccion de ptr es la de n
	printf( " n es %d \n " , n ) ; 			// el valor de n
	printf( " &n es %x \n " , &n );			// la direccion de n
	printf( " *ptr es %d \n " , *ptr ) ;	// el valor dentro del puntero
	printf( " ptres %x \n " , ptr) ;		// la direccion del puntero
	n--;
	printf( " n es despues de n - - %d \n " , n );		// el valor de n
	printf( " &nes %x \n" , &n);						// la direccion de n
	ptr++;
	printf( " ptres despues de ptr ++ %x \n" , ptr);	// la direccion de ptr
	printf(" *ptres %d \n", *ptr);						// el valor dentro de ptr
	return 0;
		
}



