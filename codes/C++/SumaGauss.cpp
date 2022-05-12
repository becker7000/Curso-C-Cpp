#include<iostream>
using namespace std;

// 1+2+3+4+..+n
void gauss(int n){ // n puede ser reconocida dentro de la función.
	int suma=0; // 1,1+2,1+2+3,1+2+3+4,...
	int contador=1;
	while(contador<=n){
		suma+=contador; //suma=suma+contador;
		contador++;
	}
	cout<<"\n\t La suma desde 1 hasta "<<n<<" es: "<<suma;
}

int main(){
	
	gauss(10);
	
	gauss(20);
	
	gauss(30);
	
	return 0;
}
