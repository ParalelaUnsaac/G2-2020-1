#pragma once
#include "Metodos.h"


Metodos::Metodos()
{
	this->sizeOfArrays = 10;
}


Metodos::~Metodos()
{
}

int* Metodos::GetRandomVector()
{
	int* vector = new int[sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		vector[i] = rand() % 20 - 20;
	}

	return vector;
}

int** Metodos::GetRandomMatrix()
{
	int** matrix = new int* [sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		matrix[i] = new int[sizeOfArrays];
	}

	for (int i = 0; i < sizeOfArrays; i++)
	{
		for (int j = 0; j < sizeOfArrays; j++)
		{
			matrix[i][j] = rand() % 100 - 100;
		}
	}

	return matrix;
}

void Metodos::printMatrix(int** matrix)
{
	for (int i = 0; i < sizeOfArrays; i++)
	{
		for (int j = 0; j < sizeOfArrays; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << '\n';
	}
}

int* Metodos::sumOfVectors(int* vector1, int* vector2)
{
	int* resVector = new int[sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		resVector[i] = vector1[i] + vector2[i];
	}

	return resVector;
}

int** Metodos::sumOfMatrix(int** matrix1, int** matrix2)
{
	int** resMatrix = new int* [sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		resMatrix[i] = new int[sizeOfArrays];
	}

	for (int i = 0; i < sizeOfArrays; i++)
	{
		for (int j = 0; j < sizeOfArrays; j++)
		{
			resMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	return resMatrix;
}

int** Metodos::vectorToMatrix(int* vector)
{
	int** matrix = new int* [sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		matrix[i] = new int[sizeOfArrays];
	}

	for (int i = 0; i < sizeOfArrays; i++)
	{
		for (int j = 0; j < sizeOfArrays; j++)
		{
			matrix[i][j] = 0;
		}
	}

	for (int i = 0; i < sizeOfArrays; i++) {
		matrix[0][i] = vector[i];
	}

	return matrix;
}


int* Metodos::matrixToVector(int** matrix)
{
	int* vector = new int[sizeOfArrays];
	int indexOfVector = 0;

	for (int i = 0; i < sizeOfArrays; i++) {
		for (int j = 0; j < sizeOfArrays; j++) {
			if (matrix[i][j] != 0) vector[indexOfVector++] = matrix[i][j];
		}
	}

	return vector;
}

int** Metodos::multMatrix(int** matrix1, int** matrix2)
{
	int** resultMatrix = new int* [sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		resultMatrix[i] = new int[sizeOfArrays];
	}

	for (int i = 0; i < sizeOfArrays; i++)
	{
		for (int j = 0; j < sizeOfArrays; j++)
		{
			resultMatrix[i][j] = 0;
		}

	}

	for (int i = 0; i < sizeOfArrays; i++) {
		for (int j = 0; j < sizeOfArrays; j++) {
			for (int k = 0; k < sizeOfArrays; k++) {
				resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	return resultMatrix;
}

int** Metodos::transMatrix(int** matrix)
{
	int** transMatr = new int* [sizeOfArrays];

	for (int i = 0; i < sizeOfArrays; i++)
	{
		transMatr[i] = new int[sizeOfArrays];
	}

	for (int i = 0; i < sizeOfArrays; i++)
	{
		for (int j = 0; j < sizeOfArrays; j++)
		{
			transMatr[i][j] = 0;
		}
	}

	for (int i = 0; i < sizeOfArrays; i++) {
		for (int j = 0; j < sizeOfArrays; j++) {
			transMatr[i][j] = matrix[j][i];
		}
	}
	return transMatr;
}

int Metodos::maxOfMatrix(int** matrix)
{
	int max = matrix[0][0];

	for (int i(0); i < this->sizeOfArrays; i++)
		for (int j(0); j < this->sizeOfArrays; j++)
			if (matrix[i][j] > max)
				max = matrix[i][j];

	return max;
}

int Metodos::dotProduct(int* vector1, int* vector2)
{
	int result = 0;

	for (int i = 0; i < sizeOfArrays; i++)
		result += vector1[i] * vector2[i];

	return result;
}

int** Metodos::sortMatrix(int** matrix)
{
	int temp;

	for (int k = 0; k < sizeOfArrays; k++)
	{
		for (int i = 0; i < sizeOfArrays - 1; i++)
		{
			for (int j = i + 1; j < sizeOfArrays; j++)
			{
				if (matrix[k][i] > matrix[k][j])
				{
					temp = matrix[k][i];
					matrix[k][i] = matrix[k][j];
					matrix[k][j] = temp;
				}
			}
		}
	}

	return matrix;
}
