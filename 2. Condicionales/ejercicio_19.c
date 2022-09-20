/* Se ingresa un número de hasta 5 cifras y se indica si es o no capicúa */

#include<stdio.h>
int main(){
	
	int num, c1,c2,c3,c4,c5;
	
	printf("Ingrese un numero de 5 cifras: ");
	scanf("%i",&num);
	

		
	c5= num/10000;
	c4= (num-(c5*10000))/1000;
	c3= (num-((c5*10000)+(c4*1000)))/100;
	c2= (num-((c5*10000)+(c4*1000)+(c3*100)))/10;
	c1= (num-((c5*10000)+(c4*1000)+(c3*100)+(c2*10)));
		
	if((c5==c1) && (c4==c2)){
		printf("\n\n %i es un numero capicua",num);
	}
	else{
		printf("\n\nNo es un nro capicua");
	}	
	
	return 0;
}
