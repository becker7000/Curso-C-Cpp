#include<iostream>
using namespace std;
// Recursividad es una propiedad de las funciones de mandarse 
// a llamar a si mismas.

int factorial(int x){
	if(x==0 || x==1) //Caso base:
		return 1;
	else 
		return x*factorial(x-1); //Relacion de recurrencia.
}

/*
	4!=4*3!=4*3*2!=4*3*2*1!=4*3*2*1=24
*/

int main(){
	
	int n;
	do{ //Filtro para guardar en n un valor en el conjunto discreto [0,16]
		cout<<"\n\t Dame un numero natural (0-16): ";
		cin>>n;
	}while(n<0 || n>16);
	
	
	cout<<"\n\t "<<n<<"! = "<<factorial(n);
	
	return 0;
}
