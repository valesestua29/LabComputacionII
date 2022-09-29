//Cuál es el valor final de todas las variables en este program

#include<stdio.h>
int main(){
	
	int a,b,*p,*q,*r;
	char c, d, *m, *n;
	
	a=5; 		// se asigna 5
	b=7;		// dr asigna 7
	
	q=&a;		// q toma la direccion de a
	p=q;		// p toma la direccion de q
	*p=b;		// p toma el VALOR de b
	
	printf("%d \n\n", *q);	// 7
	
	r=&b;		// r toma la direccion de b
	*r=*q;		// r toma el valor de q
	
	printf("a=%d b=%d *p=%d *q=%d *r=%d \n\n\n",a,b,*p,*q,*r);	 
	
	c='A';		// se asigna A
	d='B';		// se asigna B
	m=&c;		// m toma la direccion de c
	n=&d;		// n toma la direccion de d
	*m=*n;		// m toma el valor de n
	
	printf ("c=%c d=%c m=%c n=%c ",c,d,*m,*n);
	
	return 0;
}



