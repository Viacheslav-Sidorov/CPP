#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(std::string name) : Animal(name) {};
	std::string Voice() override;
};
