#include<stdio.h>

int main(){
	
	int contador=1; //Variable de control (iterador)
	
	while(contador<=450){ //Condición del bucle (loop)
		printf("\n\t c = %d",contador);
		contador++; //Sufijo  <- Incremento
	} // ctrl + c <- para abortar ejecución
	
	printf("\n\n");
	return 0;
	
}
