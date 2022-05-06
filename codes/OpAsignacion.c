#include<stdio.h>

int main(){
	
	//Podemos declarar muchas variables en una sola linea siempre y cuando 
	//estas sean del mismo. 
	int x=5,y=10; 
	
	//El valor que tiene y se acumula en x, sin el valor anterior x
	x+=y; //x=15 , y=10 -> x=x+y;
	printf("\n\t x = %d , y = %d",x,y);
	
	x+=4;
	printf("\n\t x = %d",x);
	
	x*=2;
	printf("\n\t x = %d",x);

	return 0;  //Para compilar en linux: gcc -o nombre nombre.c 
				//Para ejecutrar es: ./nombre
}
