#include<stdio.h>
//Este programa ilustra los valores devueltos 
//por los operadores relaciones.

int main(){
	
	int logico; //EL lenguaje C no cuenta con tipo de dato lógico.
	
	//Esta expresión relación nos devuelve o un 0 o un 1.
	logico=(3>5); 
	
	printf("\n\t El valor logico es: %d",logico);
	
	printf("\n\n");
	return 0;
}
