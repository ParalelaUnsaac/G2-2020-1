#pragma once
#include "Metodos.h"
//  d=[a]*[b]
void Multipliacion_Matrices() {

	int** d;
	int** a, ** b;

	Metodos data;


	b = data.GetRandomMatrix();
	a = data.GetRandomMatrix();

	d = data.multMatrix(a, b);


#pragma omp critical
	{
		printf("\n multiplicacion de matrices \n d = [A]*[B] resultado:\n%d\n", d);
	}
}
