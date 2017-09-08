#ifndef CORAZA_H
#define CORAZA_H
#include "Soldado.h"
#include <string>
using namespace std;

class Coraza: public Soldado {
	private:
		int dureza;
		int cantidad;
	public:
		Coraza();
		Coraza(int, int);
		Coraza(string, string, int, int, int);
		int getDureza();
		void setDureza(int);
		int getCantidad();
		void setCantidad(int);
		double ataque();
		double defensa();
};

#endif
