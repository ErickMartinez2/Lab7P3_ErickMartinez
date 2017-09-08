#include "Escuadron.h"
#include "Soldado.h"
#include "Arquero.h"
#include "Coraza.h"
#include "Asesino.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int opcion;
	vector<Escuadron> escuadrones;
	do {
		cout << endl;
		cout << "*** Guerras Punicas ***" << endl
			<< "1. Agregar Escuadron" << endl
			<< "2. Agregar Soldado" << endl
			<< "3. Simulacion" << endl
			<< "4. Salir" << endl
			<< "Ingrese su opción: ";
		cin >> opcion;
		cout << endl;
		switch (opcion) {
			case 1:{
					   cout << "-> Agregar Escuadron" << endl;
					   cout << "Ingrese el nombre del escuadron: ";
					   string nombre;
					   cin >> nombre;
					   Escuadron escuadron(nombre);
					   escuadrones.push_back(escuadron);
					   cout << "Escuadron Agregado!!" << endl;
				   }break;
			case 2:{
					   cout << "-> Agregar Soldado" << endl;
					   for (int i = 0; i < escuadrones.size(); i++) {
						   cout << i  << ". " << escuadrones.at(i).getNombre() << endl;
					   }
					   cout << "Ingrese el numero del escuadron: ";
					   int opcion2;
					   cin >> opcion2;
					   cout << endl;
					   cout << "-> Informacion del Soldado" << endl;
					   cout << "Ingrese el nombre: ";
					   string nombre;
					   cin >> nombre;
					   cout << "Ingrese la ciudad: ";
					   string ciudad;
					   cin >> ciudad;
					   cout << "Ingrese la edad: ";
					   int edad;
					   cin >> edad;
					   cout << endl;
					   cout << "-> Tipo de Soldado" << endl
						   << "1. Arquero" << endl
						   << "2. Coraza Dura" << endl
						   << "3. Asesino Oculto" << endl
						   << "Ingrese su opcion: ";
					   int opcion3;
					   cout << endl;
					   switch (opcion3) {
						   case 1:{
									  cout << "-> Informacion Arquero" << endl;
									  cout << "Ingrese la cantidad de flechas: ";
									  int flechas;
									  cin >> flechas;
									  cout << "Ingrese la precision: ";
									  int precision;
									  cin >> precision;
									  Soldado* soldado = new Arquero(nombre, ciudad, edad, flechas, precision);
									  escuadrones.at(opcion2).getSoldados().push_back(soldado);
									  cout << "Arquero Agregado!!" << endl;
								  }break;
					   }
				   }break;
			case 3:{
					   cout << "-> Agregar Escuadron" << endl;
					   cout << "Ingrese el nombre del escuadron: ";
					   string nombre;
					   cin >> nombre;
					   Escuadron escuadron(nombre);
					   escuadrones.push_back(escuadron);
					   cout << "Escuadron Agregado!!" << endl;
				   }break;
			case 4:{
					   cout << "Hasta Pronto!!" << endl;
				   }break;
		}
	} while (opcion != 4);
	return 0;
}
