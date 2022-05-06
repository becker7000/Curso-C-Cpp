#include<stdio.h>
//Uso de la estructura de control if

int main(){
	
	//Entrada: 
	int edad;
	printf("\n\t Dame tu edad: ");
	scanf("%d",&edad);
	
	//Control;
	if(edad>=18){
		//Salidas: 
		printf("\n\t Eres mayor de edad.");
		printf("\n\t Puedes votar.");
	}
		
		
	printf("\n\n");
	return 0;
}
