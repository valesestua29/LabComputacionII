//Realiza la traza ( s e g u i m i e n t o ) del siguiente programa. Ejecutalo y comentar qué tarea realiza cada
//instrucción o línea del programa:

#include<stdio.h>
int main (){
	
	int *p;				//declara un puntero de tipo entero
	int a=1, b=2;		//asigna valores a a y b
	int **s;			//declara un puntero doble de tipo entero
	
	p=&a;				// p toma la direccion de a
	b=*p+1;				// b toma el contenido de p y le suma 1
	s=&p;				// s toma la direccion de p
	
	printf("p=%d *p=%d &p=%d\n\n", p, *p, &p);	// direccion ; 
	printf("s=%d *s=%d &s=%d\n\n", s, *s, &s);
	
	*s=&b;				// s cambia su contenido a la direccion de b
	
	printf ( "Se ejecutó *s=&b \n y ahora …\n ") ;
	printf ( "s=%d , *s=%d , &s=%d\n " , s , *s , &s ) ;
	
	**s=79;			// s cambia su contenido a 79 en la direccion de b que agrega un 79 en b
		
	printf ( " a=%d , &a=%d \n" , a , &a ) ;
	printf ( " b=%d , &b=%d \n " , b , &b ) ;
		
	return 0;
}






