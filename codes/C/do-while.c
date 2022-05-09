#include<stdio.h>

//Prototipos, son una buena practica en C.
void sumar();
void multiplicar();
void resto();
int entrada(); //Esta función se usa para modularizar.

int main(){
	
	//Uso recomendado para do-while son los menus
	int opcion;
	
	do{ //Este ciclo es muy útil para hacer filtros.
	    //Primero actua y luego piensa...
		printf("\n\t Selecciona una opcion 1-4.");
		printf("\n\t 1) Sumar.");
		printf("\n\t 2) Multiplicar.");
		printf("\n\t 3) Resto.");
		printf("\n\t 4) Salir.");	
		printf("\n\t Opcion => ");
		scanf("%d",&opcion);
	}while(opcion<1 || opcion >4);
	
	switch(opcion){
		case 1: 
			printf("\n\t Seleccionaste sumar.");
			sumar();
			return main();
			break;
		case 2:
			printf("\n\t Seleccionaste multiplicar.");
			multiplicar();
			return main();
			break;
		case 3: 
			printf("\n\t Seleccionaste resto.");
			resto(); //Llamada
			return main();
			break;
		case 4: 
			printf("\n\t Nos vemos pronto.");
			exit(0);
			break;
	}
	
	
	printf("\n");
	return 0;
}


//Definiciones
int entrada(){
	int x; //Local
	printf("\n\t Valor: ");
	scanf("%d",&x);
	return x;
}

void sumar(){
	int a=entrada();
	int b=entrada();
	printf("\n\t La suma %d + %d = %d",a,b,(a+b));
}

void multiplicar(){
	int a=entrada();
	int b=entrada();
	printf("\n\t La multiplicacion %d * %d = %d",a,b,(a*b));
}

void resto(){
	int a=entrada();
	int b=entrada();
	printf("\n\t %d resto %d = %d",a,b,(a%b));
}

