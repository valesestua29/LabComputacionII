// Analiza el siguiente programa:

#include<stdio.h>
int main(){
	
	int a, b, c;		//declara tres variables tipo entero
	int *p1, *p2;		// declara dos punteros tipo entero
	p1=&a;				// p1 toma la direccion de a
	printf("p1=%d  &a=%d", p1, &a);
	*p1=1;				// el contenido de p1 cambia a 1 lo cual significa a=1
	printf("\n\n*p1=%d a=%d", *p1, a);
	p2=&b;				// p2 toma la direccion de b
	printf("\n\np2=%d  &b=%d", p2, &b);
	*p2=2;				// el contenido de p2 camabia a 2 lo cual significa b=2
	printf("\n\n*p2=%d b=%d", *p2, b);
	p1=p2;				// la direccion de p1 se vuelve igual a la de p2 pero el contenido de a permanece igual a=1
	printf("\n\np1=%d  p2=%d  a=%d", p1, p2, a);
	*p1=0;				// el contenido de p1 = 0 que como tiene la direccion de p2 vuelve a b=0
	printf("\n\np1=%d", *p1);
	p2=&c;				// p2 toma la direccion de c
	printf("\n\np2=%d  &c=%d", p2, &c);
	*p2=3;				// el contenido de p2 = 3 lo cual significa c=3
	printf("\n\n*p2=%d", *p2);
	
	printf( "\n\na=%d b=%d c=%d", a, b, c);
	
	return 0;
	
}



