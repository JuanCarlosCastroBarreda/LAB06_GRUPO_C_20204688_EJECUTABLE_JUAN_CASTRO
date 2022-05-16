#include <iostream>
#include "Datos.h"
using namespace std;

int main() {

	Datos d1=Datos(20204688, "Juan Carlos Castro Barreda", 20, 10, 10);
	d1.cui();
	d1.nombre();
	d1.notas();
	
	system("pause");
	return 0;
}
