#include <iostream>
#include <iomanip>
#include <ctime>

void PrintMatrix(int** matrix, int rowCount, int colCount)
{
	for (size_t i = 0; i < rowCount; i++)
	{
		for (size_t j = 0; j < colCount; j++)
		{
			std::cout << std::left << std::setw(4) << matrix[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void FillMatrix(int** matrix, int rowCount, int colCount)
{
	for (size_t i = 0; i < rowCount; i++)
		for (size_t j = 0; j < colCount; j++)
			matrix[i][j] = rand() % 100;
}

int main()
{
	setlocale(0, "RU");
	int** matrix;
	int rowCount, colCount;
	std::cout << "Кол-во строк: ";
	std::cin >> rowCount;
	std::cout << "Кол-во столбцов: ";
	std::cin >> colCount;
	matrix = new int* [rowCount];
	for (size_t i = 0; i < rowCount; i++)
		matrix[i] = new int[colCount];
	FillMatrix(matrix, rowCount, colCount);
	PrintMatrix(matrix, rowCount, colCount);

	return 0;
}