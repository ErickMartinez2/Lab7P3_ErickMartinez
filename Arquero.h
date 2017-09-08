#ifndef ARQUERO_H
#define ARQUERO_H
#include "Soldado.h"
#include <string>
using namespace std;

class Arquero: public Soldado {
	private:
		int flechas;
		int precision;
	public:
		Arquero();
		Arquero(int, int);
		Arquero(string, string, int, int, int);
		int getFlechas();
		void setFlechas(int);
		int getPrecision();
		void setPrecision(int);
		double ataque();
		double defensa();
};

#endif
