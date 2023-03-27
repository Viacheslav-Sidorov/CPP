#include "Point.h"
// .cpp файл - тут находится реализация функций

Point::Point(int x, int y)
{
	// this - означет, что обращение идёт к полю класса
	this->x = x;
	this->y = y;
}

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

double Point::GetDistance(Point* p)
{
	return sqrt(pow(p->x - this->x, 2) + pow(p->y - this->y, 2));
}

double Point::GetDistance(int x, int y)
{
	// new Point(x, y) - анонимное создание объекта
	return this->GetDistance(new Point(x, y));
}
