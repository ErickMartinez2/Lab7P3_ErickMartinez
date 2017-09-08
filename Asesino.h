#ifndef ASESINO_H
#define ASESINO_H
#include "Soldado.h"
#include <string>
using namespace std;

class Asesino: public Soldado {
	private:
		int cantidad;
		int capacidad;
	public:
		Coraza();
		Coraza(int, int);
		Coraza(string, string, int, int, int);
		int getCantidad();
		void setCantidad(int);
		int setCapacidad();
		void setCapacidad(int);
};

#endif
