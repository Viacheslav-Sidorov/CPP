#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	// Вызов базового конструктора
	// В классах наследниках обязательно следует вызывать базовый конструктор.
	Cat(std::string name) : Animal(name) {};
	// При переопределении функции базового класса следует указывать 
	// служебное слово override
	std::string Voice() override;
};

