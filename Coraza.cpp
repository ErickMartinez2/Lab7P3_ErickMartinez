#include "Coraza.h"

Coraza::Coraza() {

}

Coraza::Coraza(int pdureza, int pcantidad) {
	dureza = pdureza;
	cantidad = pcantidad;;
}

Coraza::Coraza(string pnombre, string pciudad, int pedad, int pdureza, int pcantidad): Soldado(pnombre, pciudad, pedad) {
	dureza = pdureza;
	cantidad = pcantidad;
}

int Coraza::getDureza() {
	return dureza;
}

void Coraza::setDureza(int pdureza) {
	dureza = pdureza;
}

int Coraza::getCantidad() {
	return cantidad;
}

void Coraza::setCantidad(int pcantidad) {
	cantidad = pcantidad;
}

