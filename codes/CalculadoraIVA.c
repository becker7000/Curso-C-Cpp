#include<stdio.h>
//Este programa es una calculadora de IVA.

int main(){
	
	//const nos ayuda a declarar las constantes. 
	const float IVA=0.16;
	float sin_iva,con_iva; //snake_case
	
	printf("\n\t Escribe un monto sin I.V.A. => ");
	//scanf recibe dos parametros, el primero es el código de formato
	//de lo que va a entrar (tipo de dato), el segundo la dirección de memoria
	//donde se va a guardar. Nota: & -> dame tu dirección.
	scanf("%f",&sin_iva);
	// 100 -> 100+100*0.16=116
	// con_iva -> primero agregamos el valor de sin_iva y luego su 16%
	con_iva=sin_iva+sin_iva*IVA;
	printf("\n\t El monto con I.V.A. es: $%.2f",con_iva);
	
	return 0;
}
