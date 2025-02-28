#include <iostream>
#include "Persona.cpp"

using namespace std;

class Cliente : Persona {
	// Los atributos de los clientes, cosas que los clientes tiene
	private : string nit;
	
	// Declaramos el construcctor, siempre uno vacio y uno lleno.
	
	public : 
	Cliente (){
		}
		
	Cliente (string nom, string ape, string dir, int tel, string n): Persona(nom,ape,dir,tel){
		nit = n;
		}
		
	//Metodos
	//Set =Modificar
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	
	//Get = Mostrar
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}

	//Metodos		
	void mostrar (){
		cout << "_____________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		
	}
};

