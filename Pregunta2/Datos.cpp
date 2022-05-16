#include "Datos.h"
#include "iostream"
#include "string"

using namespace std;

Datos::Datos(int _CUI,string _nombre_completo, int _nota1, int _nota2, int _nota3){
	CUI=_CUI;
	nombre_completo=_nombre_completo;
	nota1=_nota1;
	nota2=_nota2;
	nota3=_nota3;
}
Datos::~Datos()
{
}

void Datos::cui(){
	cout<<"Su CUI es: "<<CUI<<endl;
}
void Datos::nombre(){
	cout<<"Tu nombre es: "<<nombre_completo<<endl;
}
void Datos::notas(){
	cout<<"Tus notas son: "<<nota1<<" "<<nota2<<" "<<nota3<<" y tu promedio es: "<<(nota1+nota2+nota3)/3<<endl;
	if ((nota1+nota2+nota3)/3>=10.5){
		cout<<"Aprobaste Ciencias de la Computacion 2"<<endl;
	}
	else{
		cout<<"No Aprobaste el curso de Ciencias de la Computacion 2"<<endl;
	}
}
