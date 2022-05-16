#ifndef DATOS_H
#define DATOS_H

#include <iostream>
#include <string>
using namespace std;

class Datos{

private:

    int CUI;
    string nombre_completo;
    int nota1;
    int nota2;
    int nota3;
    
public:

    Datos(int, string, int, int, int);
    ~Datos();
    void cui();
    void nombre();
    void notas();
    };

#endif
