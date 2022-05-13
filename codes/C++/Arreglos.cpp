#include<iostream>
using namespace std;

int main(){
	
	//Declarando un arreglo
	//Un arreglo es un conjunto de direcciones en la memoria 
	//estas direcciones van adyacentes.
	
	int edades[5];
	int suma=0;
	float promedio;
	
	for(int i=0;i<5;i++){
		cout<<"\n\t Dame la edad "<<(i+1)<<": ";
		cin>>edades[i];
		suma+=edades[i]; //suma=suma+edades[i]
	}

	promedio=suma/5;	
	cout<<"\n\t El promedio es: "<<promedio;
	
	cout<<"\n\t Las edades son: ";
	int menor=edades[0];
	for(int i=0;i<5;i++){
		cout<<" "<<edades[i];
		if(menor>edades[i])
			menor=edades[i];
	}
	
	cout<<"\n\t El valor menor es: "<<menor;
	
	//Algoritmo de ordenamiento por el método de la burbuja:
	for(int i=4;i>0;i--){
		for(int j=0; j<i; j++){
			if(edades[j]>edades[j+1]){
				int aux=edades[j];
				edades[j]=edades[j+1];
				edades[j+1]=aux;
			}
		}
	}
		
	//Imprimiendo el arreglo:
	cout<<"\n\t Las edades ordenadas son: ";
	for(int i=0;i<5;i++){
		cout<<" "<<edades[i];
	}
	
	//Busqueda secuencial:
	int edad;
	bool banderilla=false; //Exclusivo de C++
	cout<<"\n\t Dame edad para buscarla: ";
	cin>>edad;
	
	for(int i=0;i<5;i++){
		if(edad==edades[i]){
			cout<<"\n\t La edad "<<edad<<" si esta en el arreglo.";
			cout<<"\n\t Esta la posicion "<<i;
			banderilla=true;
		}
	}

	// not cambia el valor booleano de la variable banderilla.
	if(!banderilla){
		cout<<"\n\t La edad "<<edad<<" no se encontro en el arreglo.";
	}		
	return 0;	
	
}


/* 

	Explicacion del algoritmo de ordenamiento 
	por el método de la burbuja:
	
	int num[]={5,2,7,1,3}  n=5  comparaciones: 4
	
	pasada 0: 4 comparaciones i=4, j=0
	2, 5, 7, 1, 3
	2, 5, 7, 1, 3
	2, 5, 1, 7, 3
	2, 5, 1, 3, 7
	
	pasada 1: 3 comparaciones i=3, j=1
	2, 5, 1, 3, 7
	2, 1, 5, 3, 7
	2, 1, 3, 5, 7
	
	pasada 2: 2 comparaciones i=2, j=2
	1, 2, 3, 5, 7
	1, 2, 3, 5, 7
	
	Existen muchos métodos de ordenamiento: 
	1) Directos 2) Indirectos
	Directos: burbuja, selección, inserción.
	Indirectos: Quicksort,Shellsort, Mergesort.

*/
