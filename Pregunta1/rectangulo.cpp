#include "Rectangulo.h"
#include "iostream"
#include "string"

using namespace std;

Rectangulo::Rectangulo(int _base, int _altura){
    base=_base;
    altura=_altura;
}
Rectangulo::~Rectangulo()
{
}

void Rectangulo::perimetro(){
    cout<<"El perimetro es "<<2*(base+altura)<<endl;
}

void Rectangulo::area(){
    cout<<"El area es "<<base*altura<<endl;
}
