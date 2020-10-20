
#pragma once
#include "Metodos.h"

//  d=a+b
void Sumar_Vectores() {

	int *d;
	int* a, * b;

	Metodos data;


	b = data.GetRandomVector();
	a = data.GetRandomVector();



	d= data.sumOfVectors(a, b);


#pragma omp critical
	{
		printf("\nsumar vectores\n d = A+B resulta:\n%d\n", d);
	}
}

