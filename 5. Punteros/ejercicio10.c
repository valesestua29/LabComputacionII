//Completa el siguiente programa:

#include<stdio.h>
int main(){
	
	int num, n;		// declara dos variables de tipo entero
	int *dir_n;		// declara un puntero de tipo entero
	num=22;			// asigna a la variable num el valor de 22
	n=7;			// asigna a la variable n el valor de 7
	dir_n=&n;		// asigna a la direccion de dir_n la direccion de la variable n
		
	printf( "La variable num vale: %d \n " , num ) ;
	printf( "La dirección de memoria donde esta almacenada la variable num es: %x \n" , &num) ;
	printf( "La dirección de memoria almacenada en dir_ n es : %x \n " , dir_n ) ;
	printf( "El valor de la variable apuntada por dir_n es: %d \n " , *dir_n ) ;

	return 0;
}



