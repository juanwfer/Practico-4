// Ejercicio 20.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float total = 0;
	char curr;
	cout << "Ingrese un numero para agregar al promedio, o un simbolo para calcularlo.";
	cin >> curr;
	switch(curr) {
		case 0:
			cout << curr;
			break;
		case 1:
			cout << 1;
			break;
		case 2:
			cout << "dos";
			break;
		case 3:
			cout << "tr3s";
			break;
	}
  return 0;
}

