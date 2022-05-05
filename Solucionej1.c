#include<stdio.h>

int main(){
	
	char letra_min= 'r';
	//Transformando la letra mayuscula:
	char letra_may=letra_min-32; //Aritmetica de caracteres.
	printf("\n\t La letra %c en mayuscula es %c.",letra_min,letra_may);
	
	return 0;
}
