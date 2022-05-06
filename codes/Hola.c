#include<stdio.h>
#define PI 3.141592

void mensaje(); //Prototipo. 

int main(){
	
	// La función prinf pertenece a la libreria stdio.h
	// y nos ayuda a imprimir en consola un mensaje con formato.
	printf("\n\t Hola a todos desde C");
	// %f es el código de formato para la salida formateada 
	// para los números que tiene punto decimal.
	printf("\n\t El valor de PI es: %f",PI);
	
	//Sino se manda a llamar una función esta ejecutará
	//aunque esté bien definida y bien declarada.
	mensaje(); //Llamada
	mensaje();
	mensaje();
		
	return 0; // Esta linea devuelve el control al SO
}

//Definción
void mensaje(){
	printf("\n\t Esto es un mensaje especial.");
}

/*
	Esto es un comentario de muchas lineas
	esta es otra linea
*/



