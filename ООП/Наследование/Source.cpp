#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

/*
	���������� ������������:
	1. ��������� ��������� �������
	2. ���������� ������� ����
	3. ����������� �������� � ������� ��������� �������
*/

void main()
{
	setlocale(LC_ALL, "RU");
	Animal* animals[2];
	animals[0] = new Cat("������");
	animals[1] = new Dog("�����");
	cout << animals[0]->Voice();
	cout << animals[1]->Voice();
}