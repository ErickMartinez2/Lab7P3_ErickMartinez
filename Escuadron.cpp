#include "Escuadron.h"

Escuadron::Escuadron() {

}

Escuadron::Escuadron(string pnombre) {
	nombre = pnombre;
}

string Escuadron::getNombre() {
	return nombre;
}

void Escuadron::setNombre(string pnombre) {
	nombre = pnombre;
}

vector<Soldado> Escuadron::getSoldados() {
	return soldados;
}

void Escuadron::setSoldados(vector<Soldado> psoldados) {
	soldados = psoldados;
}

