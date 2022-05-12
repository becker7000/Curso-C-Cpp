#include<iostream>
#include<cmath> //Sirve para la función pow
#define PI 3.141592
using namespace std;

class circulo{
	private:
		float radio; //Atributos.
	public:
		//Constructor
		circulo(float _radio); //Métodos.
		//Setter de radio
		setRadio(float _radio);
		//Getter de radio
		float getRadio();
		void mostrar();
		void calcularArea();
		void calcularPerimetro();
};

//Definciones de los métodos:
//Constructor: (crea circulos)
circulo::circulo(float _radio){
	radio=_radio;
}

//Definición del setter (modifica el radio)
circulo::setRadio(float _radio){
	radio=_radio;
}

//Definición del getter (devuelve el valor del radio)
float circulo::getRadio(){
 	return radio;
}

//Definicion del método mostrar
void circulo::mostrar(){
	cout<<"\n\t Este circulo tiene de radio: "<<radio;
}

//Definición del método area()
void circulo::calcularArea(){
	float area=PI*pow(radio,2);
	cout<<"\n\t El area del circulo es: "<<area;
}

void circulo::calcularPerimetro(){
	float perimetro=PI*2*radio;
	cout<<"\n\t El perimetro del circulo es: "<<perimetro;
}


int main(){

	circulo c1(4);
	circulo c2(7.5);
	circulo c3(10);
	
	cout<<"\n\t---------";
	c1.mostrar();
	c1.calcularArea();
	c1.calcularPerimetro();
	//Usando un getter para mostrar el radio.
	cout<<"\n\t Radio: "<<c1.getRadio();
	//Modificando el radio de c1 con un setter.
	c1.setRadio(11.7);
	c1.mostrar(); //Mostrando circulo para ver que cambió.
	
	
	cout<<"\n\t---------";
	c2.mostrar();
	c2.calcularArea();
	c2.calcularPerimetro();
	
	cout<<"\n\t---------";
	c3.mostrar();
	c3.calcularArea();
	c3.calcularPerimetro();
	
	return 0;
}




