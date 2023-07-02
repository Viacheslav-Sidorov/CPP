#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

/*
	Назначение наследования:
	1. Улучшение структуры проекта
	2. Уменьшение размера кода
	3. Возможность хранения в массиве различных классов
*/

void main()
{
	setlocale(LC_ALL, "RU");
	Animal* animals[2];
	animals[0] = new Cat("Барсик");
	animals[1] = new Dog("Шарик");
	cout << animals[0]->Voice();
	cout << animals[1]->Voice();
}