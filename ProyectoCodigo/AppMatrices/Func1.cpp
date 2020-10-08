//Transpuesta de una matriz
int** Data::transMatrix(int** matrix)
{
	int** transMatr = new int*[sizeOfArrays];

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