#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <string>

using namespace std;

class Fecha{
	private:
		int anio_nac;
		int mes_nac;
		int dia_nac;
		int anio_actual;
		int mes_actual;
		int dia_actual;
		string nombre;
		
	public:
		Fecha(int, int, int, int, int, int, string);
		~Fecha();
		void datos();
		
};
#endif
