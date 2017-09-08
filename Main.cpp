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
						   cout << i  << ". Escuadron " << escuadrones.at(i).getNombre() << endl;
					   }
					   bool escuadron_correcto = false;
					   int opcion2;
					   do {
						   cout << "Ingrese el numero del escuadron: ";
						   cin >> opcion2;
						   if (opcion2 >= 0 && opcion2 < escuadrones.size()) {
							   escuadron_correcto = true;
						   } else {
							   cout << "Escuadron Incorrecto!!" << endl;
						   }
					   } while (!escuadron_correcto);
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
					   cin >> opcion3;
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
						   case 2:{
									  cout << "-> Informacion Coraza Dura" << endl;
									  int dureza;
									  bool correcta_dureza = false;;
									  do {
										  cout << "Ingrese la dureza de la armadura [1-10]: ";
										  cin >> dureza;
										  if (dureza >= 1 && dureza <= 10) {
											  correcta_dureza = true;
										  } else {
											  cout << "Dureza Fuera de Rango!!" << endl;
										  }
									  } while (!correcta_dureza);
									  cout << "Ingrese la cantidad de lanzas: ";
									  int cantidad;
									  cin >> cantidad;
									  Soldado* soldado = new Coraza(nombre, ciudad, edad, dureza, cantidad);
									  escuadrones.at(opcion2).getSoldados().push_back(soldado);
									  cout << "Coraza Dura Agregada!!" << endl;
								  }break;
						   case 3:{
									  cout << "-> Informacion Asesino Oculto" << endl;
									  cout << "Ingrese la cantidad de asesinatos: ";
									  int cantidad;
									  cin >> cantidad;
									  int capacidad;
									  bool correcta_capacidad = false;;
									  do {
										  cout << "Ingrese la capacidad de pasar desapercibido [1-10]: ";
										  cin >> capacidad;
										  if (capacidad >= 1 && capacidad <= 10) {
											  correcta_capacidad = true;
										  } else {
											  cout << "Capacidad Fuera de Rango!!" << endl;
										  }
									  } while (!correcta_capacidad);
									  Soldado* soldado = new Asesino(nombre, ciudad, edad, cantidad, capacidad);
									  escuadrones.at(opcion2).getSoldados().push_back(soldado);
									  cout << "Asesino Oculto Agregado!!" << endl;
								  }break;
					   }
				   }break;
			case 3:{
					   cout << "-> Simulacion" << endl;
					   for (int i = 0; i < escuadrones.size(); i++) {
						   cout << i  << ". Escuadron " << escuadrones.at(i).getNombre() << endl;
					   }
					   cout << endl;
					   cout << "-> Bando Alpha" << endl;
					   cout << "Ingrese el numero del escuadron frontal: ";
					   int escuadron_f1;
					   cin >> escuadron_f1;
					   cout << "Ingrese el numero del escuadron de retaguardia: ";
					   int escuadron_r1;
					   cin >> escuadron_r1;
					   cout << endl;
					   cout << "-> Bando Beta" << endl;
					   cout << "Ingrese el numero del escuadron frontal: ";
					   int escuadron_f2;
					   cin >> escuadron_f2;
					   cout << "Ingrese el numero del escuadron de retaguardia: ";
					   int escuadron_r2;
					   cin >> escuadron_r2;
					   cout << endl;
					   double ataque1;
					   vector<Soldado*> soldado = escuadrones.at(escuadron_f1).getSoldados();
					   for (int j = 0; j < soldado.size(); j++) {
						   ataque1 += soldado.at(j) -> ataque();
					   }
					   double defensa1;
					   vector<Soldado*> soldado2 = escuadrones.at(escuadron_r1).getSoldados();
					   for (int j = 0; j < soldado2.size(); j++) {
						   ataque1 += soldado2.at(j) -> ataque();
					   }
					   double ataque2;
					   vector<Soldado*> soldado3 = escuadrones.at(escuadron_f2).getSoldados();
					   for (int j = 0; j < soldado3.size(); j++) {
						   ataque1 += soldado3.at(j) -> ataque();
					   }
					   double defensa2;
					   vector<Soldado*> soldado4 = escuadrones.at(escuadron_r2).getSoldados();
					   for (int j = 0; j < soldado4.size(); j++) {
						   ataque1 += soldado4.at(j) -> ataque();
					   }
					   cout << "Simulacion Terminada!!" << endl;
					   if (ataque1 > defensa2) {
						   cout << "Ganador: Bando Alpha" << endl;
					   } else {
						   if (ataque2 > defensa1) {
							   cout << "Ganador: Bando Beta" << endl;
						   } else{
							   cout << "Empate" << endl;
						   }
					   }
				   }break;
			case 4:{
					   cout << "Hasta Pronto!!" << endl;
				   }break;
		}
	} while (opcion != 4);
	for (int i = 0; i < escuadrones.size(); i++) {
		vector<Soldado*> soldado = escuadrones.at(i).getSoldados();
		for (int j = 0; j < soldado.size(); j++) {
			delete soldado.at(j);
		}
	}
	return 0;
}
