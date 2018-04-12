// Ejercicio 26.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	char ans;
	do {
		cout << "Desea girar la ruleta?(s/n)\n>>> ";
		cin >> ans;
		int num = rand() % 36;
		if(num % 2 == 0) cout << "Par: ";
		else cout << "Impar: ";
		switch(num) {
			case 0:
				cout << "0\n";
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 9:
			case 12:
			case 14:
			case 16:
			case 18:
			case 21:
			case 23:
			case 25:
			case 27:
			case 30:
			case 32:
			case 34:
			case 36:
				cout << num << " el rojo\n";
				break;
			default:
				cout << num << " el negro\n";
		}
		if(num > 0) {
			cout << "docena " << ceil((float)num / 12.0) << endl;
			cout << "columna ";
			if(num % 3 == 0) cout << 0;
			else cout << num % 3 << endl;
		}
		cout << endl;
	} while (ans != 'n');
	cout << "Saliendo...";
  return 0;
}

