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
	vector<Escuadron*> escuadrones;
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
					   Escuadron* escuadron = new Escuadron(nombre);
					   escuadrones.push_back(escuadron);
					   cout << "Escuadron Agregado!!" << endl;
				   }break;
			case 2:{
					   if (escuadrones.size() > 0) {
						   cout << "-> Agregar Soldado" << endl;
						   for (int i = 0; i < escuadrones.size(); i++) {
							   cout << i  << ". Escuadron " << escuadrones.at(i) -> getNombre() << endl;
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
										  vector<Soldado*> prueba = escuadrones.at(opcion2) -> getSoldados();
										  prueba.push_back(soldado);
										  escuadrones.at(opcion2) -> setSoldados(prueba);
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
										  vector<Soldado*> prueba = escuadrones.at(opcion2) -> getSoldados();
										  prueba.push_back(soldado);
										  escuadrones.at(opcion2) -> setSoldados(prueba);
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
										  vector<Soldado*> prueba = escuadrones.at(opcion2) -> getSoldados();
										  prueba.push_back(soldado);
										  escuadrones.at(opcion2) -> setSoldados(prueba);
										  cout << "Asesino Oculto Agregado!!" << endl;
									  }break;
						   }

					   } else {
						   cout << "No Hay Escuadrones Para Agregar Soldados!!" << endl;
					   }
				   }break;
			case 3:{
					   if (escuadrones.size() > 3) {
						   cout << "-> Simulacion" << endl;
						   for (int i = 0; i < escuadrones.size(); i++) {
							   cout << i  << ". Escuadron " << escuadrones.at(i) -> getNombre() << endl;
						   }
						   cout << endl;
						   cout << "-> Bando Alpha" << endl;
						   int escuadron_f1;
						   bool correcto_f1 = false;
						   do {
							   cout << "Ingrese el numero del escuadron frontal: ";
							   cin >> escuadron_f1;
							   if (escuadron_f1 >= 0 && escuadron_f1 < escuadrones.size()) {
								   correcto_f1 = true;
							   } else {
								   cout << "Escuadron Incorrecta!!" << endl;
							   }
						   } while (!correcto_f1);
						   int escuadron_r1;
						   bool correcto_r1 = false;
						   do {
							   cout << "Ingrese el numero del escuadron de retaguardia: ";
							   cin >> escuadron_r1;
							   if (escuadron_r1 >= 0 && escuadron_r1 < escuadrones.size()) {
								   if (escuadron_r1 != escuadron_f1) {
									   correcto_r1 = true;
								   } else {
									   cout << "Escuadron en Uso!!" << endl;
								   }
							   } else {
								   cout << "Escuadron Incorrecto!!" << endl;
							   }
						   } while (!correcto_r1);
						   cout << endl;
						   cout << "-> Bando Beta" << endl;
						   int escuadron_f2;
						   bool correcto_f2 = false;
						   do {
							   cout << "Ingrese el numero del escuadron frontal: ";
							   cin >> escuadron_f2;
							   if (escuadron_f2 >= 0 && escuadron_f2 < escuadrones.size()) {
								   if ((escuadron_f2 != escuadron_f1) && (escuadron_f2 != escuadron_r1)) {
									   correcto_f2 = true;
								   } else {
									   cout << "Escuadron en Uso!!" << endl;
								   }
							   } else {
								   cout << "Escuadron Incorrecto!!" << endl;
							   }
						   } while (!correcto_f2);
						   int escuadron_r2;
						   bool correcto_r2 = false;
						   do {
							   cout << "Ingrese el numero del escuadron de retaguardia: ";
							   cin >> escuadron_r2;
							   if (escuadron_r2 >= 0 && escuadron_r2 < escuadrones.size()) {
								   if ((escuadron_r2 != escuadron_f2) && (escuadron_r2 != escuadron_f1) && (escuadron_r2 != escuadron_r1)) {
									   correcto_r2 = true;
								   } else {
									   cout << "Escuadron en Uso!!" << endl;
								   }
							   } else {
								   cout << "Escuadron Incorrecto!!" << endl;
							   }
						   } while (!correcto_r2);
						   cout << endl;
						   double ataque1 = 0;
						   for (int j = 0; j < escuadrones.at(escuadron_f1) -> getSoldados().size(); j++) {
							   ataque1 += escuadrones.at(escuadron_f1) -> getSoldados().at(j) -> ataque();
						   }
						   double defensa1 = 0;
						   for (int j = 0; j < escuadrones.at(escuadron_r1) -> getSoldados().size(); j++) {
							   defensa1 += escuadrones.at(escuadron_r1) -> getSoldados().at(j) -> defensa();
						   }
						   double ataque2 = 0;
						   for (int j = 0; j < escuadrones.at(escuadron_f2) -> getSoldados().size(); j++) {
							   ataque2 += escuadrones.at(escuadron_f2) -> getSoldados().at(j) -> ataque();
						   }
						   double defensa2 = 0;
						   for (int j = 0; j < escuadrones.at(escuadron_r2) -> getSoldados().size(); j++) {
							   defensa2 += escuadrones.at(escuadron_r2) -> getSoldados().at(j) -> defensa();
						   }
						   cout << "Simulacion Terminada!!" << endl;
						   cout << "Ataque Bando Alpha: " << ataque1 << endl;
						   cout << "Defensa Bando Alpha: " << defensa1 << endl;
						   cout << "Ataque Bando Beta: " << ataque2 << endl;
						   cout << "Defensa Bando Beta: " << defensa2 << endl;
						   if (ataque1 > defensa2 * 10) {
							   cout << "Ganador: Bando Alpha" << endl;
						   } else {
							   if (ataque2 > defensa1 * 10) {
								   cout << "Ganador: Bando Beta" << endl;
							   } else{
								   cout << "Empate" << endl;
							   }
						   }
					   } else {
						   cout << "No Hay Escuadrones Suficientes Para La Simulación!!" << endl;
					   }
				   }break;
			case 4:{
					   cout << "Hasta Pronto!!" << endl;
				   }break;
		}
	} while (opcion != 4);
	for (int i = 0; i < escuadrones.size(); i++) {
		for (int j = 0; j < escuadrones.at(i) -> getSoldados().size(); j++) {
			delete escuadrones.at(i) -> getSoldados().at(j);
		}
	}
	for (int i = 0; i < escuadrones.size(); i++) {
		delete escuadrones.at(i);
	}
	return 0;
}
