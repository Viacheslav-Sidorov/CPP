#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	// ����� �������� ������������
	// � ������� ����������� ����������� ������� �������� ������� �����������.
	Cat(std::string name) : Animal(name) {};
	// ��� ��������������� ������� �������� ������ ������� ��������� 
	// ��������� ����� override
	std::string Voice() override;
};

