#include<iostream>
using namespace std;

// 4!=4*3*2*1=24
// 5!=5*4*3*2*1=120

int factorial(int x){
	int fact=1; //Tip: las multiplicaciones inician en 1.
	for(int i=x;i>1;i--) //Iteración es una repetición.
		fact*=i; //fact=fact*i
	return fact;	
}

int main(){
	
	int num;
	
	do{ //Nota: do-while sirve para filtrar los datos:
		cout<<"\n\t Escribe un numero natural [0,16]: ";
		cin>>num;
	}while(num<0||num>16);
	
	// 4! = 24
	cout<<"\n\t "<<num<<"! = "<<factorial(num);
	
	return 0;
}







