#include "Point.h"
// .cpp ���� - ��� ��������� ���������� �������

Point::Point(int x, int y)
{
	// this - �������, ��� ��������� ��� � ���� ������
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
	// new Point(x, y) - ��������� �������� �������
	return this->GetDistance(new Point(x, y));
}

Point Point::operator+(const Point& p)
{
	return Point(this->x + p.x, this->y + p.y);
}

std::ostream& operator<<(std::ostream& out, const Point* point)
{
	out << "(" << point->x << ", " << point->y << ")";
	return out;
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")";
	return out;
}
