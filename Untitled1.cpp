#include "persona.cpp"
#include <iostream>
using namespace std;

main (){
	string nombre,apellidos, direccion,fecha_nacimiento;
	int telefono=0;
 
	cout<<"ingrese tu nombre:";
	cin>>nombre;
	cout<<"ingrese tu apellidos:";
	cin>>apellidos;
	cout<<"ingrese tu direccion:";
	cin>>direccion;
	cout<<"ingrese tu numero de telefono:";
	cin>>telefono;
	cout<<"ingrese su fecha de nacimiento:";
	cin>>fecha_nacimiento;
	// instanciar  un objeto 
	persona Persona = persona(nombre,apellidos,direccion,fecha_nacimiento,telefono);
	Persona.leer();
	
}
