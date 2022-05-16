#include "Fecha.h"
#include <iostream>
#include <string>

using namespace std;

Fecha::Fecha(int _anio_nac, int _mes_nac, int _dia_nac, int _anio_actual, int _mes_actual, int _dia_actual, string _nombre){
	anio_nac=_anio_nac;
	mes_nac=_mes_nac;
	dia_nac=_dia_nac;
	anio_actual=_anio_actual;
	mes_actual=_mes_actual;
	dia_actual=_dia_actual;
	nombre=_nombre;
}
Fecha::~Fecha()
{
}

void Fecha::datos(){
	cout<<"Hola "<<nombre<<", naciste el "<<dia_nac<<"/"<<mes_nac<<"/"<<anio_nac<<endl;
	cout<<"Hoy es: "<<dia_actual<<"/"<<mes_actual<<"/"<<anio_actual<<" por lo que tienes "<<anio_actual-anio_nac<<" anios"<<endl;
}
