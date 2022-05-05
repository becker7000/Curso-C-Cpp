#include<stdio.h>

int main(){ //Tipos de datos.
	
	/*
		Estilos de identificadores:
		
		1) Camell case: varUno <- lowerCamellCase
		2) Snake case: var_uno
		3) Pascal case: VarUno <- UpperCamellCase
		
	*/
	
	int x=34; //El código de formato para los enteros es: %d, %i
	printf("\n\t x = %d",x);
	
	float y=45.12; //El código de formato para los double o float es: %f.
	printf("\n\t y = %.2f",y);
	
	char letra='k';  //El código de formato para los char es %c.
	printf("\n\t Letra en modo char: %c",letra);
	
	//Nota: los char también los podemos usar como enteros. (0,255)
	printf("\n\t Letra en modo entero: %d",letra);
	
	
	return 0;
	
}
