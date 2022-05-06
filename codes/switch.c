#include<stdio.h>

int main(){
	
	int opcion; //Esta es una variable selector
	
	//Menú de usuario.
	printf("\n\t Menu: ");
	printf("\n\t 1) Opcion uno");
	printf("\n\t 2) Opcion dos");
	printf("\n\t 3) Opcion tres");
	printf("\n\t 4) Opcion cuatro");
	printf("\n\t => ");
	
	scanf("%d",&opcion);
	
	
	switch(opcion){
		
		case 1:
			printf("\n\t Hola, soy la primera opcion");
			break;
		case 2:
			printf("\n\t Hola, soy la segunda opcion");
			break;
		case 3:
			printf("\n\t Hola, soy la tercera opcion");
			break;
		case 4:
			printf("\n\t Hola, soy la cuarta opcion");
			break;
		default:
			printf("\n\t Hola, soy una opcion no contemplanda");
	}
	
	printf("\n\n");
	return 0;
}
