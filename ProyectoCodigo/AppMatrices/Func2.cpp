#pragma once
#include "Func2.h"
//  d=[a]*[b]
void Func1() {

	int** d;
	int** a, ** b;

	Metodos data;

#pragma omp critical
	{
		printf("Func 2 started\n");
	}

	b = data.GetRandomMatrix();
	a = data.GetRandomMatrix();

	d = data.multMatrix(a, b);


#pragma omp critical
	{
		printf("\nFunc 2 ended\nd = [A]*[B] result:\n%d\n", d);
	}
}
