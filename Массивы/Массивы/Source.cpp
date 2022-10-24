#include <iostream>
#include <ctime>

void FillRandom(int* array, int size)
{
	for (int i = 0; i < size; i++)
		array[i] = rand() % 100;
}

void PrintArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << ' ';
	std::cout << std::endl;
}

int main()
{
	// Указатель на целый тип.
	int* arr;
	int size;
	std::cin >> size;
	// Выделение памяти для массива
	arr = new int[size];
	srand(time(0));
	FillRandom(arr, size);
	PrintArray(arr, size);

	return 0;
}