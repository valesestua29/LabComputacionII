/* Desarrolla un algoritmo que permita determinar el área y volumen de un cilindro
 cuyo radio (r) y altura (h) se leen desde teclado*/
 
 #include<stdio.h>
 #include<math.h>
 
 int main(){
 	
 	const float pi = 3.1416;
	float area, volumen, radio, altura;
	
 	printf("Ingrese la altura del cilindro: ");
 	scanf("%f",&altura);
 	
 	printf("\n\nIngrese el radio del cilindro: ");
 	scanf("%f", &radio);
 	
 	area = ((2*pi)*radio*altura) + ((2*pi)+pow(radio,2));	  //2p r h + 2p r²
	volumen =  pi * (pow(radio,2)) * altura;				  //pi r² h
	
	printf("\n\nEl area del cilindo es %.2f", area);
	printf("\n\nEla volumen del cilindro es %.2f", volumen);
 	
 	return 0;
 }
 
