// Ejercicio 24.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 1;
	cout << 0 << endl;
	for(int i = 0; i < 11; i++) {
		cout << a + b << endl;
		int swap = a;
		a = b + a;
		b = swap;
	}
	system("pause");
  return 0;
}