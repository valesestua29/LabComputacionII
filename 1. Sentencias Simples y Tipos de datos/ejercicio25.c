/* Determina la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos */
#include<stdio.h>
#include<math.h>

int main(){
	
	float cat1, cat2, hip;
	
	printf("Ingrese el primer cateto: ");
	scanf("%f", &cat1);
	
	printf("\nIngrese el segundo cateto: ");
	scanf("%f", &cat2);
	
	hip = sqrt((pow(cat1,2))+(pow(cat2,2)));
	
	printf("\n\nLa hipotenusa es igual a %.2f ",hip);
	
	return 0;
}
