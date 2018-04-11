// Ejercicio 13.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	unsigned int totalA = 0;
	unsigned short int countA = 0, countB = 0;
	unsigned int totalB = 0;
	for(int i = 0; i < 100; i++) {
		unsigned short int curr = rand() % 200;
		cout << curr << endl;
		if(curr < 100) {
			totalA += curr;
			countA++;
		}
		else if (curr > 100){
			totalB += curr;
			countB++;
		}
	}
	cout << "Un total de " << countA << " numeros menores a 100 sumaron " << totalA << endl;
	cout << "Un total de " << countB << " numeros mayores a 100 sumaron " << totalB << endl;
	system("pause");
  return 0;
}