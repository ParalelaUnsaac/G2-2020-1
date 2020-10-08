#pragma once
#include <iostream>
#include <stdlib.h>

class Metodos
{
public:
	Metodos();

	~Metodos();

	int* GetRandomVector();
	int** GetRandomMatrix();
	void printMatrix(int** matrix);
	int* sumOfVectors(int* vector1, int* vector2);
	int** sumOfMatrix(int** matrix1, int** matrix2);
	int** vectorToMatrix(int* vector);
	int* matrixToVector(int** matrix);
	int** multMatrix(int** matrix1, int** matrix2);
	int** transMatrix(int** matrix);
	int dotProduct(int* vector1, int* vector2);
	int** sortMatrix(int** matrix);
	int maxOfMatrix(int** matrix);

private:
	int sizeOfArrays;
};


