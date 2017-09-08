#include "Arquero.h"

Arquero::Arquero() {

}

Arquero::Arquero(int pflechas, int pprecision) {
	flechas = pflechas;
	precision = pprecision;
}

Arquero::Arquero(string pnombre, string pciudad, int pedad, int pflechas, int pprecision): Soldado(pnombre, pciudad, pedad) {
	flechas = pflechas;
	precision = pprecision;
}

int Arquero::getFlechas() {
	return flechas;
}

void Arquero::setFlechas(int pflechas) {
	flechas = pflechas;
}

int Arquero::getPrecision() {
	return precision;
}

void Arquero::setPrecision(int pprecision) {
	precision = pprecision;
}

double Arquero::ataque() {
	return flechas * precision / 1000;
}

double Arquero::defensa() {
	return 0;
}

