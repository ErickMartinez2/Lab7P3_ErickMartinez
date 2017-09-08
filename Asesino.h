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
		Asesino();
		Asesino(int, int);
		Asesino(string, string, int, int, int);
		int getCantidad();
		void setCantidad(int);
		int getCapacidad();
		void setCapacidad(int);
		double ataque();
		double defensa();
};

#endif
