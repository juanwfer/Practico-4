// Ejercicio 25.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for(int f = 0; f < 10; f++) {
		for(int g = 0; g < 10; g++) {
			for(int h = 0; h < 10; h++) {
				for(int i = 0; i < 10; i++) {
					for(int j = 0; j < 10; j++) {
						//cout << f << "-" << g << "-" << h << "-" << i << "-" << j << endl;
						printf_s("%d-%d-%d-%d-%d\n", f, g, h, i, j);//printf_s es mucho más rápido
					}
				}
			}
		}
	}
	system("pause");
  return 0;
}

