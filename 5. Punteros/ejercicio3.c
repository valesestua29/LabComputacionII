/* Armar paso a paso el programa  */

#include<stdio.h>
int main(){
	
	//Declara a, b y c variables enteras, y p, q y r variables puntero a entero.
	int a,b,c, *p,*q,*r;  	
	//Declara m, n variables de tipo float y s y t variables puntero a float.
	float m,n, *s,*t;		
	
	//Asigna a p la direcci�n de a y a q la direcci�n de b.
	p=&a;					
	q=&b;
	
	//Asigna a b el valor 40 usando el puntero q. Mostrar el valor de b, la direcci�n de b , el valor de q, la direcci�n de q 
	// y el valor contenido en la direcci�n almacenada en q.
	*q=40;				
	printf("\nvalor de b = %i",b);
	printf("\ndireccion de b = %i",&b);
	printf("\nvalor de q = %i",*q);
	printf("\ndireccion de q= %i", q);
	printf("\nel valor contenigo en la direccion almacenada en q = %i", &q);
		
	//Ingresar desde teclado el valor de a usando su direcci�n almacenada. Mostrar el valor de a, la direcci�n de a, el valor de p,
	//la direcci�n de p y el valor contenido en la direcci�n almacenada en p.
	
	printf("\n\nIngrese el valor de a: ");
	scanf("%i",&a);
	
	printf("\nvalor de a= %i",a);
	printf("\ndireccion de a = %x",&a);
	printf("\nvalor de q = %i",*p);
	printf("\ndireccion de q= %x", p);
	printf("\nel valor contenido en la direccion almacenada en p = %i", &p);
	
	//Asigna a r la direcci�n de a.
	r=&a;
	
	//Asigna a la posici�n de memoria contenida en el puntero r el valor 200. Mostrar el valor de a, la direcci�n de a , el valor de
	//p, la direcci�n de p y el valor contenido en la direcci�n almacenada en p, y el valor de r, la direcci�n de r y el valor
	//contenido en la direcci�n almacenada en r.
	
	*r=200;
	
	printf("\nvalor de a= %i",a);
	printf("\ndireccion de a = %x",&a);
	printf("\nvalor de p= %i",*p);
	printf("\ndireccion de p= %x", p);
	printf("\nvalor contenido en la direccion de p= %i", &p);
	printf("\nvalor de r = %i",*r);
	printf("\ndireccion de r= %x", r);
	printf("\nvalor contenido en la direccion de r= %i", &r);
	
	//Emite un mensaje indicando si el valor del puntero p es igual al valor del puntero q
	
	if(*p==*q){
		printf("\n\nEl valor de p es igual al valor de q");
	}
	else{
		printf("\n\nEl valor de p no es igual al valor de q");
	}
	
	//�dem i indicando si el valor del puntero p es igual al valor del puntero r.
	
	if(*p==*r){
		printf("\n\nEl valor de p es igual al valor de r");
	}
	else{
		printf("\n\nEl valor de p no es igual al valor de r");
	}
		
	//Declara una variable de tipo puntero a entero y una variable entera. As�gnale un valor a la variable entera. Guarda la
	//direcci�n. Luego lee el contenido de la variable puntero y mu�stralo en hexadecimal.
	
	int *pun, ent;
	
	ent=125;
	pun=&ent;
	
	printf("\n\nEl contenido de la variable *pun = %i y en hexadecimal es %x",*pun,*pun);
	
	
	return 0;
}
