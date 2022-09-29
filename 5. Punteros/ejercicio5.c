//Un programa en C contiene las siguientes sentencias:

#include<stdio.h>
int main(){
	
	float a = 0.001, b = 0.003;
	float c, *pa, *pb;
	pa = &a;
	*pa = 2 * a;
	pb = &b;
	c = 3 * (*pb - *pa); 
	
	
	printf("%f",a);				//0.002
	printf("\n\n%f",b);			//0.003
	printf("\n\n%f",c);			//0.003
	printf("\n\n%f",*pa);		//0.002
	printf("\n\n%f",*pb);		//0.003
}
