#include "Persona.cpp"
#include <iostream>
using namespace std;

class propietario : Persona{
	
  private : string nit;
  
  public :
  Propietario(){
  }
  Propietario(string n, string cui) : Persona(nom,ape,dir,tel){ 
  nit = n;
  }
  
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  
  string getNit(){	return nit;}
  string getCui(){   return cui;}
  
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};
