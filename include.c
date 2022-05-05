#include<stdio.h>
/*
	Otro uso de la directiva include.
*/
int main(){
	
	//Usamos "" cuando están en la misma carpeta.
	#include "info.c"
	
	//Usamos <> cuando están en diferentes carpetas.
	#include <C:\Users\Erick\Documents\Curso C-C++\codes\info.c>
	
	return 0;
}


