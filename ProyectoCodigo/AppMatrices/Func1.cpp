#pragma once
#include "Func1.h"

//  d=a+b
void Func1() {

	int *d;
	int* a, * b;

	Metodos data;

#pragma omp critical
	{
		printf("Func 1 started\n");
	}

	b = data.GetRandomVector();
	a = data.GetRandomVector();



	d= data.sumOfVectors(a, b);


#pragma omp critical
	{
		printf("\nFunc 1 ended\nd = A+B result:\n%d\n", d);
	}
}
