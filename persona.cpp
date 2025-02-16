#include <iostream>
using namespace std;
// 1. nombre de clase 
class persona {
	// atributo = caracteristicas de un objeto 
	// objeto se presenta por medio de un clase 
	// atributos= nombre,direccion, apellidos, telefonos
	//2. definir el metodo de acceso. (private, public, protected(se utiliza herencia))
	// 3. definomos los atributos con sus tipos de dato
	private: 
	string nombres,apellidos, direccion, fecha_nacimiento; 
	int telefono;
	//4. constructor tipo especial de metodos que se utiliza para recibir parametros 
	// o peticiones de otros clases. tiene el mismo nombre de la clase 
	public :
	persona(){
		//constructor vacio
		
	}
	persona(string nom,string ape,string dir, string fn, int t){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fecha_nacimiento= fn;
		telefono= t; 
	}
	//6.metodos 
	// crud: crear, leer, actualizar, eliminar,
	void crear ();
	void leer(){
		cout <<"nombre:"<<nombres<<endl;
		cout<<"apellidos:"<<apellidos<<endl;
		cout<<"direccion:"<<direccion<<endl;
		cout<<"fecha de nacimiento:"<<fecha_nacimiento<<endl;
		cout<<"telefono: "<<telefono<<endl;
		
	}
	void actualizar();
	void eliminar();
};
