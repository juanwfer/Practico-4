// Ejercicio 19.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << "Ingrese el inicio del rango:\n>>> ";
	cin >> A;
	do {
		cout << "Ingrese el final del rango:\n>>> ";
		cin >> B;
		if(B - A < 100) cout << "El rango es menor a 100.\n\n";
	} while(B - A < 100);
  return 0;
}

