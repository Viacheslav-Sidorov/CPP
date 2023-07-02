#pragma once
#include <string>
// ������� �����
class Animal
{
private:
	std::string name;
public:
	Animal(std::string name) : name(name) {};
	std::string GetName();
	// ����� ����������� ������� - �������, �� ������� ����������
	// ���� � ������ ���� ���� �� ���� ����� ����������� �������, ��
	// ����� ��������� �����������
	// ����������� ����� - �����, � �������������� ������� ��� ��������
	virtual std::string Voice() = 0;
};

