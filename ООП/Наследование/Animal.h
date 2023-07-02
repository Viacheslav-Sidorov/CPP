#pragma once
#include <string>
// Базовый класс
class Animal
{
private:
	std::string name;
public:
	Animal(std::string name) : name(name) {};
	std::string GetName();
	// Чисто виртуальная функция - функция, не имеющая реализации
	// Если в классе есть хотя бы одна чисто виртуальная функция, то
	// класс считается абстрактным
	// Абстрактный класс - класс, с невозможностью создать его экземляр
	virtual std::string Voice() = 0;
};

