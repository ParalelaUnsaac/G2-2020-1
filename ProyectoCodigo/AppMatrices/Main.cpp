#include <omp.h>
#include <iostream>
#include <ctime>

#include "Metodos.h"
using namespace std;

int main()
{

	int opcion;
	printf("============================ Menu Principal ================================\n");
	cout << "1-  Opcion 1\n";
	cout << "2-  Opcion 2\n";
	cout << "3-  Opcion 3\n";
	cout << "4-  Opcion 4\n";
	printf("Seleccione una de las opciones:");
	cin >> opcion;
	printf("=============================================================================\n");
#pragma omp parallel sections num_threads(4)
	{


		switch (opcion)
		{
		case 1:
#pragma omp section

			
			break;
		case 2:
#pragma omp section

			
			break;
		case 3:
#pragma omp section

			
			break;
		case 4:
#pragma omp section

			break;

		}
	}
	return 0;
}