#include<stdio.h>
//Sentencia if-else-if -> if's concatenados
//Este programa pide una letra y le dice al usuario si es vocal o no.

int main(){
	
	char letra;
	printf("\n\n\t Dame una letra: ");
	fflush(stdin); //Limpia el buffer del scaner...
	scanf("%c",&letra);
	
	//Vocales: a,e,i,o,u,A,E,I,O,U
	
	if(letra=='a'|| letra=='A')
		printf("\n\t La letra es vocal.");
	else if(letra=='e'||letra=='E')
		printf("\n\t La letra es vocal.");
	else if(letra=='i'||letra=='I')
		printf("\n\t La letra es vocal.");
	else if(letra=='o'||letra=='O')
		printf("\n\t La letra es vocal.");
	else if(letra=='u'||letra=='U')
		printf("\n\t La letra es vocal.");
	else 
		printf("\n\t El simbolo introducido no es vocal."); 
		
	
	printf("\n\t Dale click para reiniciar.\n");
	getch();
	return main(); //Esto provoca el programa se reinicie
}
