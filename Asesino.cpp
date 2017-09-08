#include "Asesino.h"

Asesino::Asesino() {

}

Asesino::Asesino(int pcantidad, int pcapacidad) {
	cantidad = pcantidad;
	capacidad = pcapacidad;
}

Asesino::Asesino(string pnombre, string pciudad, int pedad, int pcantidad, int pcapacidad): Soldado(pnombre, pciudad, pedad) {
	cantidad = pcantidad;
	capacidad = pcapacidad;
}

int Asesino::getCantidad() {
	return cantidad;
}

void Asesino::setCantidad(int pcantidad) {
	cantidad = pcantidad;
}

int Asesino::getCapacidad() {
	return capacidad;
}

void Asesino::setCapacidad(int pcapacidad) {
	capacidad = pcapacidad;
}

