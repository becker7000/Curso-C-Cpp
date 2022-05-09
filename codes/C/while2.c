#include<stdio.h>

int main(){
	
	int i=1,j;
	
	while(i<=10){
		printf("\n\n");	//Separa cada tabla...
		j=1;	
		while(j<=10){
			printf("\n\t %d * %d = %d",i,j,i*j);
			j++;
		}
		i++; //Incremento
	}
	//Ciclar significa que nuestro ciclo se itera de forma "infita".
	
	printf("\n\n"); //VSCode
	return 0;
}

/*

	i=1, j=1
	
	primera iteracion del while mayor.
	1*1=1 -> i=1, j=1
	1*2=2 -> i=1, j=2
	1*3=3 -> i=1, j=3
	...
	1*10=10 -> i=1,j=10
	
	segunda iteración del while mayor.
	i=2, j=1
	
	2*1=2 -> i=2, j=1
	2*2=4 -> i=2, j=2
	2*3=6 -> i=2, j=3

*/

/*
----------------------------------
texto




*/



