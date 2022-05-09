class automovil{
	private: //Atributos
		string marca;
		string modelo;
		float potencia;
	public:
		//Los constructores son métodos que nos ayuan a producir objetos.
		automovil(string _marca,string _modelo,float _potencia);
		void mostrar();
};

//Definicion del constructor
automovil::automovil(string _marca,string _modelo, float _potencia){
	marca=_marca;
	modelo=_modelo;
	potencia=_potencia;	
}

void automovil::mostrar(){
	cout<<"\n\t Marca: "<<marca;
	cout<<"\n\t Modelo: "<<modelo;
	cout<<"\n\t Potencia: "<<potencia;
}

