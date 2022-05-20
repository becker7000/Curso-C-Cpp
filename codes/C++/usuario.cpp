#include<iostream>
using namespace std;

class usuario{
	private: //Atributos o variables de campo:
		int id; //static es inicializar un única vez el id.
		string nombre;
		string email;
	public:
		usuario(int,string,string); //Constructor
		//Getters y setters:
		int getId(); //Getter del id -> nos da el id de una persona
		void setId(int); //Setter del id -> reajustamos el id de una persona
		string getNombre();
		void setNombre(string);
		string getEmail();
		void setEmail(string);
		//Nota: para poder hacer polimorfismo con una función o método usamos 'virtual'
		virtual void mostrar(); //Método extra, para ver cada usuario.
};

//Definición del constructor:
usuario::usuario(int _id,string _nombre,string _email){
	nombre=_nombre;
	email=_email;
	id=_id; //Variable estática que es diferente para cada usuario.
}

//Getter del id.
int usuario::getId(){
	return id;
}

//Setter del id.
void usuario::setId(int _id){
	id=_id;
}

//Getter del nombre.
string usuario::getNombre(){
	return nombre;
}

//Setter del nombre.
void usuario::setNombre(string _nombre){
	nombre=_nombre;
}

//Getter del email.
string usuario::getEmail(){
	return email;
}

//Setter del email.
void usuario::setEmail(string _email){
	email=_email;
}

void usuario::mostrar(){
	cout<<"\n\t +----------------+";
	cout<<"\n\t | Id: "<<id;
	cout<<"\n\t | Nombre: "<<nombre;
	cout<<"\n\t | Correo: "<<email;
	cout<<"\n\t +----------------+";
}

//CLASES HIJAS QUE HEREDAN DE LA CLASE PADRE 'USUARIO'.
//Nota: debemo evitar la multiherencia, en otros lenguajes no es permitida.

//Sintáxis para hacer herencia en C++
class doctor : public usuario{
	private: // 2 atributos.
		string especialidad;
		double sueldo;
	public: // El constructor va a recibir 5 cosas.
		doctor(int,string,string,string,double);
		void mostrar(); //Aquí ya no usamos la palabra 'virtual'
};

//Definiendo constructor y métodos de doctor.
doctor::doctor(int _id,string _nombre,string _email,string _especialidad,double _sueldo) : usuario(_id,_nombre,_email){
	especialidad=_especialidad;
	sueldo=_sueldo;
}

//Definiendo mostrarDoctor que hace uso de mostrarUsuario de la clase padre 'usuario'.
void doctor::mostrar(){
	usuario::mostrar();
	cout<<"\n\t +------Doctor--------+";
	cout<<"\n\t | Especialidad: "<<especialidad;
	cout<<"\n\t | Sueldo: "<<sueldo;
	cout<<"\n\t +--------------------+";
}

//CLASE HIJA #2 PACIENTE -> HERENCIA
//Sintáxis para hacer herencia en C++
class paciente : public usuario{
	private: // 2 atributos.
		string telefono; //Los teléfono.
		string numSeguro; //Número de seguro.
	public: // El constructor va a recibir 5 cosas.
		paciente(int,string,string,string,string);
		void mostrar();
};

//Definiendo constructor y métodos de paciente.
paciente::paciente(int _id,string _nombre,string _email,string _telefono,string _numSeguro) : usuario(_id,_nombre,_email){
	telefono=_telefono;
	numSeguro=_numSeguro;
}

//Definiendo mostrarPaciente que hace uso de mostrarUsuario de la clase padre 'usuario'.
void paciente::mostrar(){
	usuario::mostrar();
	cout<<"\n\t +--------Paciente------+";
	cout<<"\n\t | Telefono: "<<telefono;
	cout<<"\n\t | numSeguro: "<<numSeguro;
	cout<<"\n\t +----------------------+";
}

int main(){ // Función para poder hacer pruebas de la clase usuario.
	
	usuario *personas[4];
	
	//Asignación manúal de elementos del arreglo:
	personas[0]= new doctor(1,"Eduardo","eduDoc45@gmail.com","Cardiologia",35000);
	personas[1]= new doctor(2,"Pamela","pamDoc987@gmail.com","Neurologia",70000);
	personas[2]= new paciente(3,"Mario","marPac415@gmail.com","5512345678","MAE1223");
	personas[3]= new paciente(4,"Alicia","alicpac9127@gmail.com","5501928374","AOQ0987");

	//Mandamos a mostrar a todas las personas del hospital 
	//El método mostrar (polimorfico) reacciona diferente
	//dependiendo si es doctor o si es paciente.
	for(int i=0; i<4; i++)
		personas[i]->mostrar();
	
	return 0;
	
}

