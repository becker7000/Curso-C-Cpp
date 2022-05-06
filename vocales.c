#include<stdio.h>

int main(){
	
	char letra;
	printf("\n\n\t Dame una letra: ");
	fflush(stdin); //Limpia el buffer del scaner...
	scanf("%c",&letra);
	
	//Pasando un char como selector 
	switch(letra){
		case 'a': case 'A':
		case 'e': case 'E':
		case 'i': case 'I':
		case 'o': case 'O':
		case 'u': case 'U':
			printf("\n\t La letra es vocal");
			break;
		default:
			printf("\n\t El simbolo introducido no es vocal");		
	}
	
	return 0;
}
