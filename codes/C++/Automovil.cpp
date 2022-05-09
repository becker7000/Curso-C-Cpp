#include<iostream>
using namespace std;

// Los 4 pilares son: Encapsulamiento, Abstraccion, Herencia y Polimorfismo.
// Encapsulamiento tiene niveles de acceso: private,protected,public. 
// Abstracción: xD, :D, con pocos elementos logramos comprender una entidad.
// Herencia: Persona (nombre) -> Doctor (especialidad)
// Polimorfismo: muchas formas.

#include "ClaseAutomovil.cpp"

int main(){
	
	automovil a1("Ford","Fusion",180.0);
	automovil a2("Subaru","WRX",700.1);
	
	cout<<"\n";
	a1.mostrar();
	cout<<"\n\n";
	a2.mostrar();
	
	return 0;
}

