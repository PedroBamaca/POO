//comentario para hacer prueba en github


#include <iostream>
#include "Cliente.cpp"
using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar numero de telefono: ";
	cin>>telefono;
	
	//Mandar a llamar al objeto, instancia
	
	Cliente obj = Cliente (nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();	
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();

	
//	cout<<"Datos del cliente "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
	
	
	/*C
	
	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
	
	
	
	
	
}
