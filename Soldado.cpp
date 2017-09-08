#include "Soldado.h"

Soldado::Soldado() {

}

Soldado::Soldado(string pnombre, string pciudad, int pedad) {
	nombre = pnombre;
	ciudad = pciudad;
	edad = pedad;
}

string Soldado::getNombre() {
	return nombre;
}

void Soldado::setNombre(string pnombre) {
	nombre = pnombre;
}

string Soldado::getCiudad() {
	return ciudad;
}

void Soldado::setCiudad(string pciudad) {
	ciudad = pciudad;
}

int Soldado::getEdad() {
	return edad;
}

void Soldado::setEdad(int pedad) {
	edad = pedad;
}

double Soldado::ataque() {
	return 0;
}

double Soldado::defensa() {
	return 0;
}

