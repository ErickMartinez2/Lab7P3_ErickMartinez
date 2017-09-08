#ifndef SOLDADO_H
#define SOLDADO_H
#include <string>
using namespace std;

class Soldado {
	private:
		string nombre;
		string ciudad;
		int edad;
	public:
		Soldado();
		Soldado(string, string, int);
		string getNombre();
		void setNombre(string);
		string getCiudad();
		void setCiudad(string);
		int getEdad();
		void setEdad(int);
};

#endif
