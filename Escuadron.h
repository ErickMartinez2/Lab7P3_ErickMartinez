#ifndef ESCUADRON_H
#define ESCUADRON_H
#include <string>
#include <vector>
#include "Soldado.h"
using namespace std;

class Escuadron {
	private:
		string nombre;
		vector<Soldado> soldados;
	public:
		Escuadron();
		Escuadron(string);
		string getNombre();
		void setNombre(string);
		vector<Soldado> getSoldados();
		void setSoldados(vector<Soldado>);
};

#endif
