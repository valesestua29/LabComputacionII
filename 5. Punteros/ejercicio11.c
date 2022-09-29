//Qué emite el siguiente programa?

#include<stdio.h>
int main(){
	
	int u=3,v; 			//declara dos variables tipo enteras
	int *pu;			// declara *pu como puntero entero
	int *pv;			// declara *pv como puntero entero
	pu=&u;				// le da a pu la direccion de u
	v=*pu;				// v toma el contenido de *pu
	pv=&v;				// pv toma la direccion de v
	
	printf( "\n u=%d &u=%X pu=%X *pu=%d " , u , &u , pu , *pu ) ;		// u=3  &u=XX  pu=XX  *pu=3  
	printf( "\n v=%d &v=%X pv=%X *pv= %d " , v , &v , pv , *pv ) ;		// v=3  &v=YY  pv=YY  *pv=3 
	
	
	return 0;
}
