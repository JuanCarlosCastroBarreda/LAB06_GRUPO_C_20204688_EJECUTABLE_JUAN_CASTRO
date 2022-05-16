#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
using namespace std;

class Rectangulo{

private:

    int base;
    int altura;

public:

    Rectangulo(int, int);
    ~Rectangulo();
    void perimetro();
    void area();
    };

#endif
