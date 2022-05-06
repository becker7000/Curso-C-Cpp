#include<stdio.h>

int main(){
	
	//Datos de entrada:
	int segundos,minutos,segEnt;
	printf("\n\t Dame una cantidad de segungos: ");
	scanf("%d",&segEnt); //segEnt=100
	
	
	//Proceso:
	minutos=segEnt/60; // minutos=1
	segundos=segEnt%60; // segundos=40
	
	//Salidas:
	printf("\n\t Los segundos de entrada son equivalentes a: ");
	printf("\n\t %d minuto(s) con %d segundo(s).",minutos,segundos);
	
	
	printf("\n\n");
	return 0;
}
