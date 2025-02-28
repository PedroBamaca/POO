#include <iostream>
using namespace std;
class Persona{
	//atributos de la clase
	protected : string nombres,apellidos,direccion;
				int telefono;
	
	//metodo para mostrar la informacion
	
	
	//construcctor, puede recibir un parametro o recibir nada
	protected :		
			Persona(){	
			}
			Persona(string nom,string ape, string dir, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
			}
	
	void mostrar ();
	
	
};
 
