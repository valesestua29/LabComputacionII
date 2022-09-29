#include<stdio.h>

void intercambia(int *pa, int *pb);

int main(){
	
	int a=7, b=8;
	
	printf("a=%d b=%d",a,b);
	intercambia(&a,&b);
	
	printf("a=%d b=%d",a,b);
	return 0;
}

void intercambia(int *pa, int *pb){
	
	int z;
	z=*pa;
	*pa=*pb;
	*pb=z;
		
	
}
